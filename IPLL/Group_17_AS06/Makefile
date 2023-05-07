parser.out: lex.yy.o y.tab.o A6_17_translator.o A6_17_target_translator.o
	g++ lex.yy.o y.tab.o A6_17_translator.o A6_17_target_translator.o -lfl -o parser.out

A6_17_target_translator.o: A6_17_target_translator.cxx A6_17_translator.h
	g++ -c A6_17_target_translator.cxx

A6_17_translator.o: A6_17_translator.cxx A6_17_translator.h
	g++ -c A6_17_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: A6_17.l y.tab.h A6_17_translator.h
	flex A6_17.l

y.tab.c y.tab.h: A6_17.y
	bison -dty --report=all A6_17.y

libA6_17_.a: A6_17_.o
	ar -rcs libA6_17_.a A6_17_.o

A6_17_.o: A6_17_.c myl.h
	gcc -c A6_17_.c

clean:
	rm libA6_17_.a A6_17_.o parser.out A6_17_translator.o A6_17_target_translator.o lex.yy.* y.tab.* y.output test*

test: parser.out libA6_17_.a
	@echo "Generating assembly files\n"
	./parser.out A6_17_test1 > A6_17_quads1.out
	./parser.out A6_17_test2 > A6_17_quads2.out
	./parser.out A6_17_test3 > A6_17_quads3.out
	./parser.out A6_17_test4 > A6_17_quads4.out
	./parser.out A6_17_test5 > A6_17_quads5.out
	./parser.out A6_17_test6 > A6_17_quads6.out
	./parser.out A6_17_test7 > A6_17_quads7.out
	@echo "Compiling assembly files\n"
	gcc A6_17_test1.s -L. -lA6_17_ -no-pie -o test1
	gcc A6_17_test2.s -L. -lA6_17_ -no-pie -o test2
	gcc A6_17_test3.s -L. -lA6_17_ -no-pie -o test3
	gcc A6_17_test4.s -L. -lA6_17_ -no-pie -o test4
	gcc A6_17_test5.s -L. -lA6_17_ -no-pie -o test5
	gcc A6_17_test6.s -L. -lA6_17_ -no-pie -o test6
	gcc A6_17_test7.s -L. -lA6_17_ -no-pie -o test7
	@echo "Binaries generated. Run using ./test<num>\n\n"
	@echo "Running test1:\n"
	@./test1
	@echo "Running test2:\n"
	@./test2
	@echo "Running test3:\n"
	@./test3
	@echo "Running test4:\n"
	@./test4
	@echo "Running test5:\n"
	@./test5
	@echo "Running test6:\n"
	@./test6
	@echo "Running test7:\n"
	@./test7
