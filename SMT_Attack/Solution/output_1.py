from z3 import *

SMT = Solver()

def motion(in1,in2,key1,key4,key7,key_13):
      
    mult1,mult2=BitVecs('mult1 mult2',32)
    add1,add6= BitVecs('add1 add6',32)
    out1 = BitVecs('out1',32)

    mult1 = If(key7,in1 * in2,in1 + 20)
    mult2 = in1 * key1

    add1 = in1 * mult2
    add6 = If(key_13,mult1*add1,mult1 + add1)
    out1 = add6 + key4

    arr = [out1]
    return arr


bv_sort = BitVecSort(32)
upper_bound = BitVecVal(2 ** 31 - 1, bv_sort)
in1,in2 = BitVecs('in1 in2',32)
in1itr1,in2itr1 = BitVecs('in1itr1 in2itr1',32)
in1itr2,in2itr2 = BitVecs('in1itr2 in2itr2',32)


key11,key12,key13,key14,key15,key16 = BitVecs('key11 key12 key13 key14 key15 key16',32)
key17,key18,key19,key1_10,key1_11,key1_12,key1_13,key1_14,key1_15,key1_16,key1_17,key1_18,key1_19,key1_20 = Bools('key17 key18 key19 key1_10 key1_11 key1_12 key1_13 key1_14 key1_15 key1_16 key1_17 key1_18 key1_19 key1_20')   
out11,out21= BitVecs('out11 out21',32)

key21,key22,key23,key24,key25,key26 = BitVecs('key21 key22 key23 key24 key25 key26',32)
key27,key28,key29,key2_10,key2_11,key2_12,key2_13,key2_14,key2_15,key2_16,key2_17,key2_18,key2_19,key2_20 = Bools('key27 key28 key29 key2_10 key2_11 key2_12 key2_13 key2_14 key2_15 key2_16 key2_17 key2_18 key2_19 key2_20')   

out1itr1,out1itr2 = BitVecs('out1itr1 out1itr2',32)

SMT.add(motion(in1,in2,key11,key14,key17,key1_13)[0] == out11)
SMT.add(motion(in1,in2,key21,key24,key27,key2_13)[0] == out21)

#out of bound constraints

SMT.add((out11 == out21))
SMT.add(key1_13 == True)
SMT.add(key2_13 == True)
SMT.add(key14 == 300)
SMT.add(key24 == 300)
SMT.add(And(key11 >= 0,key11 <= 100000))
SMT.add(And(key21 >= 0,key21 <= 100000))


limit = 100000
iter = 1
file = open("keys_1.txt", "w")
while iter <= limit:
    if SMT.check() == unsat:
        print("Keys found!")
        final_solver = Solver()
        for SMT in SMT.assertions():
            if str(SMT) == "Not(out1_1 == out1_2)":
                final_solver.add(out1_1 == out1_2) 
            else: 
                final_solver.add(SMT)
                
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
        
        # Line 1 - mult1 = key7? in1 * in2 : in1 +20;
        SMT.add(If(k7_1, mult1_1 == dip_in1 * dip_in2, mult1_1 == dip_in1 + 20))
        SMT.add(If(k7_2, mult1_2 == dip_in1 * dip_in2, mult1_2 == dip_in1 + 20))

        # Line 2 - mult2 = dip_in1 * key1;
        SMT.add(mult2_1 == dip_in1*k1_1)
        SMT.add(mult2_2 == dip_in1*k1_2)

        # Line 15 - add1 = dip_in1 * mult2;
        SMT.add(add1_1 == dip_in1 * mult2_1)
        SMT.add(add1_2 == dip_in1 * mult2_2)

        # Line 20 - add6 = key_13 ? mult1 * add1 : mult1 + add1;
        SMT.add(If(k13_1, add6_1 == mult1_1 * add1_1, add6_1 == mult1_1 + add1_1))
        SMT.add(If(k13_2, add6_2 == mult1_2 * add1_2, add6_2 == mult1_2 + add1_2))

        # Line 21 - out1 = add6+key4;
        SMT.add(dip_out_1 == add6_1 + k4_1)
        SMT.add(dip_out_1 == add6_2 + k4_2)
        
        iter += 1
        
if iter == limit:
        print("Limit reached") 

