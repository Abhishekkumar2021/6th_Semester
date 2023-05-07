# Color variables
GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

all: run clean

run:
	@bison -d A4_17.y 1>/dev/null 2>/dev/null
	@echo "${GREEN}@ Parsing completed. ${RESET}"
	@flex A4_17.l
	@echo "${GREEN}@ Lexing completed. ${RESET}"
	@gcc lex.yy.c A4_17.tab.c A4_17.c -lfl
	@echo "${GREEN}@ Compilation completed. ${RESET}"
	@./a.out < A4_17.nc > A4_17.txt
	@echo "${GREEN}@ Execution completed. ${RESET}"
	@echo "${GREEN}@ Output file generated. ${RESET}"

clean:
	@rm -f lex.yy.c A4_17.tab.c a.out A4_17.tab.h
	@echo "${YELLOW}@ Cleaned up. ${RESET}"