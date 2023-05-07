#include <stdio.h>

extern char* yytext;
extern int yyparse();
extern FILE* yyin;

int main(int argc, char *argv[]){
    if(argc > 1){
        yyin = fopen(argv[1], "r");
    }
    else{
        yyin = stdin;
    }
    yyparse();
    return 0;
}