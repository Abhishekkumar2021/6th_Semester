from z3 import Solver,  Int, Bool, Not, sat, unsat, If
import subprocess

def f(in1, in2, key1, key4, key7, key13):
    add6 = Int('add6')
    add1 = Int('add1')
    mult1 = Int('mult1')
    mult2 = Int('mult2')
    out = Int('out')
    mult1 = If(key7, in1 * in2, in1 + 20)
    mult2 = in1 * key1
    add1 = in1 * mult2
    add6 = If(key13, mult1 * add1, mult1 + add1)
    out = add6 + key4
    
    return [out, add6, add1, mult1, mult2]

# Inputs
in1 = Int('in1')
in2 = Int('in2')

# Key set - 1
# Int keys
k1_1 = Int('k1_1')
k4_1 = Int('k4_1')

# Bool keys
k7_1 = Bool('k7_1')
k13_1 = Bool('k13_1')

# Key set - 2
# Int keys
k1_2 = Int('k1_2')
k4_2 = Int('k4_2')

# Bool keys
k7_2 = Bool('k7_2') 
k13_2 = Bool('k13_2')

# Output variables for key set - 1
out1_1 = Int('out1_1')

# Output variables for key set - 2
out1_2 = Int('out1_2')


# SMT solver
SMT = Solver()

# Constraints
SMT.add(f(in1, in2, k1_1, k4_1, k7_1, k13_1)[0] == out1_1)
SMT.add(f(in1, in2, k1_2, k4_2, k7_2, k13_2)[0] == out1_2)

# Output constraints
SMT.add(Not(out1_1 == out1_2))

limit = 100000
iter = 1
file = open("keys_1.txt", "w")
while iter <= limit:
    if SMT.check() == unsat:
        print("Keys found!")
        final_solver = Solver()
        for s in SMT.assertions():
            if str(s) == "Not(out1_1 == out1_2)":
                final_solver.add(out1_1 == out1_2) 
            else: 
                final_solver.add(s)
                
        if final_solver.check() == unsat:
            print("No solution exist!")
        else :
            m = final_solver.model()
            # Extract all keys and write to file 
            Key_1 = "Key_1: {" + str(m[k1_1]) + ", " + str(m[k1_2]) + "}\n"
            Key_4 = "Key_4: {" + str(m[k4_1]) + ", " + str(m[k4_2]) + "}\n"
            Key_7 = "Key_7: {" + str(m[k7_1]) + ", " + str(m[k7_2]) + "}\n"
            Key_13 = "Key_13: {" + str(m[k13_1]) + ", " + str(m[k13_2]) + "}\n"
            
            # Write to file
            file.write(Key_1)
            file.write(Key_4)
            file.write(Key_7)
            file.write(Key_13)
            
            # close file
            file.close()    
        break
    else:
       # DIP exists so find output from blackbox
        m = SMT.model() 
        
        # Extract all inputs from model
        dip_in1 = int(str(m[in1]))
        dip_in2 = int(str(m[in2]))

        
        process = subprocess.Popen(['./motion.exe', str(dip_in1), str(dip_in2), str(123), str(123), str(123), str(123), str(123), str(123), str(123), str(123)], stdout=subprocess.PIPE, stderr=subprocess.PIPE)                        

        output, error = process.communicate()

        if error:
            print("Error occurred: ", error)
            break
        else:
            dip_out = output.decode("utf-8")
            split = dip_out.split("\r\n")
            dip_out_1 = int(split[0])
            dip_out_2 = int(split[1])
            dip_out_3 = int(split[2])        
        # Adding new constraints to remove wrong keys
        # Constraints
        SMT.add(f(dip_in1, dip_in2, k1_1, k4_1, k7_1, k13_1)[0] == dip_out_1)
        SMT.add(f(dip_in1, dip_in2, k1_2, k4_2, k7_2, k13_2)[0] == dip_out_2)
        
        iter += 1
        
if iter == limit:
        print("Limit reached") 