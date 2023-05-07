#include "lex.yy.c"

/* Main */
int main()
{
    printf("Enter a string: ");
    yylex();

    return 0;
}