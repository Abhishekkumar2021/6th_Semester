%{
    #include "A4_17.tab.h"
    extern void yyerror(const char *);
    int line_count = 1;
%}


identifier                                              [a-zA-Z][a-zA-Z0-9]*
int_constant                                            [-+]?([1-9][0-9]*|[0-9])
char_constant                                           '([^\n'\\]|\\[\\'"?abfnrtv])*'
string_constant                                         \"([^\n'\\]|\\[\\'"?abfnrtv])*\"
white_space                                             [ \t\r\f\v]+
new_line                                                \n
invalid_token                                           .

%x multi_line_comment_body
%x single_line_comment_body

%%
"void"                                                  { return VOID; }
"int"                                                   { return INT; }
"char"                                                  { return CHAR; }
"if"		                                            { return IF; }
"else"                                                  { return ELSE; }
"for"                                                   { return FOR; }
"return"                                                { return RETURN; }

{identifier}                                            { return IDENTIFIER;}
{char_constant}                                         { return CHAR_CONSTANT;}
{int_constant}                                          { return INT_CONSTANT;}
{string_constant}                                       { return STRING; }

"->"			                                        { return POINTER; }
"<="			                                        { return LESSTHANEQUAL; }
">="			                                        { return GREATERTHANEQUAL; }
"=="			                                        { return EQUALEQUAL; }
"!="			                                        { return NOTEQUAL; }
"&&"			                                        { return AND; }
"||"			                                        { return OR; }
"["                                                     { return '['; }
"]"                                                     { return ']'; }
"("                                                     { return '('; }
")"                                                     { return ')'; }
"{"                                                     { return '{'; }
"}"                                                     { return '}'; }
"+"                                                     { return '+'; }
"-"                                                     { return '-'; }
"*"                                                     { return '*'; }
"/"                                                     { return '/'; }
"%"                                                     { return '%'; }
"="                                                     { return '='; }
";"                                                     { return ';'; }
","                                                     { return ','; }
"<"                                                     { return '<'; }
">"                                                     { return '>'; }
"&"                                                     { return '&'; }
"!"                                                     { return '!'; }
"?"                                                     { return '?'; }
":"                                                     { return ':'; }

"/*"                                                    { BEGIN(multi_line_comment_body); }
<multi_line_comment_body>.                              { }
<multi_line_comment_body>"\n"                           { line_count++; printf("\n-------------------- Parsing _line No. %d                         --------------------\n\n", line_count); }
<multi_line_comment_body>"*/"                           { BEGIN(INITIAL); }

"//"                                                    { BEGIN(single_line_comment_body); }
<single_line_comment_body>.                             {;}
<single_line_comment_body>"\n"                          { BEGIN(INITIAL); line_count++; printf("\n-------------------- Parsing _line No. %d  --------------------\n\n", line_count); }

{white_space}                                           {;}
{new_line}                                              { line_count++; printf("\n-------------------- Parsing _line No. %d  --------------------\n\n", line_count); }
{invalid_token}                                         { printf("ERROR [_line %d] : Invalid token %s\n", line_count, yytext); return INVALID_TOKEN; }

%%