%{
    #include "Main.tab.h"
%}

digit                [0-9]

%%
{digit}+             {yylval.num = atoi(yytext); return NUMBER;}
"+"                  {return PLUS;}
\n                   {return EOL;}
.                    {}
%%



