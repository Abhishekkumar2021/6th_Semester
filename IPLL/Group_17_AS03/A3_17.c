#include "lex.yy.c"

int main(int argc, char** argv){
    if(argc <= 1)
        return -1;

    FILE *file = fopen(argv[1], "r");

    if(!file)
        return -1;

    yyin = file;

    int token;
    while ((token = yylex()) != 0)
    {
       switch(token){
            case keyword:{
                printf("<KEYWORD, %s>\n", yytext);
                break;
            }
            case identifier:{
                printf("<IDENTIFIER, %s>\n", yytext);
                break;
            }
            case integer_constant:{
                printf("<INTEGER_CONSTANT, %s>\n", yytext);
                break;
            }
            case char_constant:{
                printf("<CHAR_CONSTANT, %s>\n", yytext);
                break;
            }
            case string_literal:{
                printf("<STRING_LITERAL, %s>\n", yytext);
                break;
            }
            case punctuator:{
                printf("<PUNCTUATOR, %s>\n", yytext);
                break;
            }
            case single_line_comment:{
                printf("<SINGLE_LINE_COMMENT, %s>\n", yytext);
                break;
            }
            case multi_line_comment:{
                printf("<MULTI_LINE_COMMENT, %s>\n", yytext);
                break;
            }
            case invalid_token:{
                printf("<INVALID_TOKEN, %s>\n", yytext);
                break;
            }
       }
    }
    printf("============================================\n");
    printf("Total Keywords: %d\n", keyword_count);
    printf("Total Identifiers: %d\n", identifier_count);
    printf("Total Integer Constants: %d\n", integer_constant_count);
    printf("Total Char Constants: %d\n", char_constant_count);
    printf("Total String Literals: %d\n", string_literal_count);
    printf("Total Punctuators: %d\n", punctuator_count);
    printf("Total Single Line Comments: %d\n", single_line_comment_count);
    printf("Total Multi Line Comments: %d\n", multi_line_comment_count);
    printf("Total Invalid Tokens: %d\n", invalid_token_count);
    printf("============================================\n");

    return 0;
}