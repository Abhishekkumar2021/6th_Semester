all: run_flex compile run clean_files

GREEN= \033[0;32m
ORANGE= \033[0;33m

run_flex:
	@echo "${ORANGE}Running Flex...."
	@flex A3_17.l
	@sleep 1
	@echo "${GREEN}Flex Done!"

compile:
	@echo "${ORANGE}Compiling...."
	@gcc A3_17.c
	@sleep 1
	@echo "${GREEN}Compilation Done!"

run:
	@echo "${ORANGE}Running Program...."
	@./a.out A3_17.nc > output.txt
	@sleep 1
	@echo "${GREEN}Program Done!"

clean_files:
	@echo "${ORANGE}Cleaning Files...."
	@rm lex.yy.c a.out
	@sleep 1
	@echo "${GREEN}Files Cleaned!"