parser.out: lex.yy.o y.tab.o A5_17_translator.o
	g++ lex.yy.o y.tab.o A5_17_translator.o -lfl -o parser.out

A5_17_translator.o: A5_17_translator.cxx A5_17_translator.h
	g++ -c A5_17_translator.cxx

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

	