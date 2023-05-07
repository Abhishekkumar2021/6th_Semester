%{
#include <stdio.h>

// Tokens
#define keyword 1
#define identifier 2
#define integer_constant 3
#define char_constant 4
#define string_literal 5
#define punctuator 6
#define single_line_comment 7
#define multi_line_comment 8
#define invalid_token 9

int keyword_count = 0;
int identifier_count = 0;
int integer_constant_count = 0;
int char_constant_count = 0;
int string_literal_count = 0;
int punctuator_count = 0;
int single_line_comment_count = 0;
int multi_line_comment_count = 0;
int invalid_token_count = 0;


%}

keyword              "char"|"else"|"for"|"if"|"int"|"return"|"void"

non_digit            [a-zA-Z_]
digit                [0-9]
identifier           {non_digit}({non_digit}|{digit})*

sign                 [+-]
non_zero             [1-9]
zero                 0
integer_constant     {sign}?{non_zero}{digit}*|{zero}

c_char               [^'\\\n]
escape_sequence      \'|\"|\?|\\|\[abfnrtv]
char_constant        \'({c_char}|{escape_sequence})\'

s_char               [^"\\\n] 
s_char_sequence      {s_char}*  
string_literal       \"({s_char_sequence}|{escape_sequence})*\"

punctuator           "["|"]"|"("|")"|"{"|"}"|"->"|"&"|"*"|"+"|"-"|"/"|"%"|"!"|"?"|"<"|">"|"<="|">="|"=="|"!="|"&&"|"||"|"="|":"|";"|"|"|","

single_line_comment  \/\/.*       

multi_line_comment   \/\*([^*]|\*+[^*\/])*\*+\/

white_space          [ \t\r\f\v]+

newline              \n

invalid_token        .

%%

{keyword}                                       { keyword_count++; return keyword; }
{identifier}                                    { identifier_count++; return identifier; }
{integer_constant}                              { integer_constant_count++; return integer_constant; }
{char_constant}                                 { char_constant_count++; return char_constant; }
{string_literal}                                { string_literal_count++; return string_literal; }
{punctuator}                                    { punctuator_count++; return punctuator; }
{single_line_comment}                           { single_line_comment_count++; return single_line_comment; }
{multi_line_comment}                            { multi_line_comment_count++; return multi_line_comment; }
{white_space}                                   {;}   // ignore white space
{newline}                                       {;}   // ignore newlines
{invalid_token}                                 { invalid_token_count++; return invalid_token; }

%%

int yywrap() {
    return 1; // This shows that we are done with the file and we don't want to read any more
}