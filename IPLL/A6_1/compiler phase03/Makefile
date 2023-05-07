parser.out: lex.yy.o y.tab.o A5_17_translator.o
	g++ lex.yy.o y.tab.o A5_17_translator.o -lfl -o parser.out

translator.o: A5_17_translator.cpp A5_17_translator.h
	g++ -c A5_17_translator.cpp

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: A5_17.l y.tab.h A5_17_translator.h
	flex A5_17.l

y.tab.c y.tab.h: A5_17.y
	bison -dty --report=all A5_17.y

clean:
	rm parser.out A5_17_translator.o lex.yy.* y.tab.* y.output

test: parser.out
	@echo "Running test 1 (Arithmetic, shift, and bit expressions)"
	./parser.out < A5_17_test1.nc > A5_17_quads1.out
	@echo "Test 1 complete\n"

	@echo "Running test 2 (Unary expressions and operators)"
	./parser.out < A5_17_test2.nc > A5_17_quads2.out
	@echo "Test 2 complete\n"

	@echo "Running test 3 (Relational and boolean operators with if-else blocks)"
	./parser.out < A5_17_test3.nc > A5_17_quads3.out
	@echo "Test 3 complete\n"

	@echo "Running test 4 (Arrays and pointers)"
	./parser.out < A5_17_test4.nc > A5_17_quads4.out
	@echo "Test 4 complete\n"

	@echo "Running test 5 (Declarations and assignments)"
	./parser.out < A5_17_test5.nc > A5_17_quads5.out
	@echo "Test 5 complete\n"

	@echo "Running test 6 (Loops)"
	./parser.out < A5_17_test6.nc > A5_17_quads6.out
	@echo "Test 6 complete\n"

	@echo "Running test 7 (Function calls)"
	./parser.out < A5_17_test7.nc > A5_17_quads7.out
	@echo "Test 7 complete\n"

	@echo "Running test 8 (General file)"
	./parser.out < A5_17_test8.nc > A5_17_quads8.out
	@echo "Test 8 complete\n"
	