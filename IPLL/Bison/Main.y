%{
    int yylex();
    int yywrap();
    int yyerror(char *s);
    #include <stdio.h>
    
%}

%union {
    int num;
    char sym;
}

%token <num> NUMBER
%token EOL
%type <num> exp;
%left PLUS

%%
input :
    |   line input;

line: exp EOL  { printf("%d\n", $1); }
    |   EOL;
exp: NUMBER { $$ = $1; }
    |   exp PLUS exp { $$ = $1 + $3; };

%%

int yywrap(){
    return 1;
}

int yyerror(char *s){
    printf("Error: %s\n", s);
    return 0;
}

int main(){
    yyparse();
    return 0;
}
