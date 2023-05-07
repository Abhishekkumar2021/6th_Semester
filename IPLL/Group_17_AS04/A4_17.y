%{ 
	#include <string.h>
	#include <stdio.h>
	extern int yylex();
	void yyerror(char *s);
	extern int line_count;
%}

/* Punctuators and operators */
%token AND EQUALEQUAL OR LESSTHANEQUAL GREATERTHANEQUAL
%token NOTEQUAL POINTER 

/* Keywords */
%token VOID CHAR INT
%token IF ELSE FOR RETURN

/* Other tokens */ 
%token INT_CONSTANT CHAR_CONSTANT IDENTIFIER STRING
%start translation_unit
%token INVALID_TOKEN

%%

// Rules for the grammar 

// 1. Expressions
primary_expression : IDENTIFIER 													{printf("PRIMARY_EXPRESSION => IDENTIFIER PARSED !\n");}
| 					 CHAR_CONSTANT 													{printf("PRIMARY_EXPRESSION => CHAR_CONSTANT PARSED !\n");}
|                    INT_CONSTANT 													{printf("PRIMARY_EXPRESSION => INT_CONSTANT PARSED !\n");}
| 					 STRING 														{printf("PRIMARY_EXPRESSION => STRING PARSED !\n");}
| 					 '(' expression ')' 											{printf("PRIMARY_EXPRESSION => EXPRESSION PARSED !\n");};

postfix_expression : primary_expression 											{printf("POSTFIX_EXPRESSION => PRIMARY_EXPRESSION PARSED !\n");}
| 					 postfix_expression '[' expression ']' 							{printf("POSTFIX_EXPRESSION => POSTFIX_EXPRESSION '[' EXPRESSION ']' PARSED !\n");}
| 					 postfix_expression '(' ')' 									{printf("POSTFIX_EXPRESSION => POSTFIX_EXPRESSION '(' ')' PARSED !\n");}
| 					 postfix_expression '(' argument_expression_list ')' 			{printf("POSTFIX_EXPRESSION => POSTFIX_EXPRESSION '(' ARGUMENT_EXPRESSION_LIST ')' PARSED !\n");}
| 					 postfix_expression POINTER IDENTIFIER 							{printf("POSTFIX_EXPRESSION => POSTFIX_EXPRESSION POINTER IDENTIFIER PARSED !\n");}

argument_expression_list : assignment_expression 									{printf("ARGUMENT_EXPRESSION_LIST => ASSIGNMENT_EXPRESSION PARSED !\n");}
| 						   argument_expression_list ',' assignment_expression   	{printf("ARGUMENT_EXPRESSION_LIST => ARGUMENT_EXPRESSION_LIST ',' ASSIGNMENT_EXPRESSION PARSED !\n");};

unary_expression : postfix_expression 												{printf("UNARY_EXPRESSION => POSTFIX_EXPRESSION PARSED !\n");}
| 				   unary_operator unary_expression 									{printf("UNARY_EXPRESSION => UNARY_OPERATOR UNARY_EXPRESSION PARSED !\n");};

unary_operator: '&' 																{printf("UNARY_OPERATOR => '&' PARSED !\n");}
| 				'*' 																{printf("UNARY_OPERATOR => '*' PARSED !\n");}
| 				'+' 																{printf("UNARY_OPERATOR => '+' PARSED !\n");}
| 				'-' 																{printf("UNARY_OPERATOR => '-' PARSED !\n");}
| 				'!' 																{printf("UNARY_OPERATOR => '!' PARSED !\n");}

multiplicative_expression : unary_expression 										{printf("MULTIPLICATIVE_EXPRESSION => UNARY_EXPRESSION PARSED !\n");}
| 							multiplicative_expression '*' 	unary_expression 		{printf("MULTIPLICATIVE_EXPRESSION => MULTIPLICATIVE_EXPRESSION '*' UNARY_EXPRESSION PARSED !\n");}
| 							multiplicative_expression '/' unary_expression 			{printf("MULTIPLICATIVE_EXPRESSION => MULTIPLICATIVE_EXPRESSION '/' UNARY_EXPRESSION PARSED !\n");}
| 							multiplicative_expression '%' unary_expression			{printf("MULTIPLICATIVE_EXPRESSION => MULTIPLICATIVE_EXPRESSION 'PERCENT' UNARY_EXPRESSION PARSED !\n");};

additive_expression : multiplicative_expression 									{printf("ADDITIVE_EXPRESSION => MULTIPLICATIVE_EXPRESSION PARSED !\n");}
| 					  additive_expression '+' multiplicative_expression 			{printf("ADDITIVE_EXPRESSION => ADDITIVE_EXPRESSION '+' MULTIPLICATIVE_EXPRESSION PARSED !\n");}
| 					  additive_expression '-' multiplicative_expression 			{printf("ADDITIVE_EXPRESSION => ADDITIVE_EXPRESSION '-' MULTIPLICATIVE_EXPRESSION PARSED !\n");};

relational_expression : additive_expression 										{printf("RELATIONAL_EXPRESSION => ADDITIVE_EXPRESSION PARSED !\n");}
| 						relational_expression '<' additive_expression 			    {printf("RELATIONAL_EXPRESSION => RELATIONAL_EXPRESSION '<' ADDITIVE_EXPRESSION PARSED !\n");}	
| 						relational_expression '>' additive_expression 				{printf("RELATIONAL_EXPRESSION => RELATIONAL_EXPRESSION '>' ADDITIVE_EXPRESSION PARSED !\n");}
| 						relational_expression LESSTHANEQUAL additive_expression 	{printf("RELATIONAL_EXPRESSION => RELATIONAL_EXPRESSION <= ADDITIVE_EXPRESSION PARSED !\n");}
| 						relational_expression GREATERTHANEQUAL additive_expression 	{printf("RELATIONAL_EXPRESSION => RELATIONAL_EXPRESSION >= ADDITIVE_EXPRESSION PARSED !\n");}

equality_expression : relational_expression 									    {printf("EQUALITY_EXPRESSION => RELATIONAL_EXPRESSION PARSED !\n");}
| 					  equality_expression EQUALEQUAL relational_expression 			{printf("EQUALITY_EXPRESSION => EQUALITY_EXPRESSION '==' RELATIONAL_EXPRESSION PARSED !\n");}
| 					  equality_expression NOTEQUAL relational_expression 			{printf("EQUALITY_EXPRESSION => EQUALITY_EXPRESSION '!=' RELATIONAL_EXPRESSION PARSED !\n");};

logical_AND_expression : equality_expression 										{printf("LOGICAL AND EXPRESSION => EQUALITY_EXPRESSION PARSED !\n");}
| 						 logical_AND_expression AND equality_expression 			{printf("LOGICAL AND EXPRESSION => LOGICAL AND EXPRESSION '&&' EQUALITY_EXPRESSION PARSED !\n");};

logical_OR_expression : logical_AND_expression 										{printf("LOGICAL OR EXPRESSION => LOGICAL AND EXPRESSION PARSED !\n");}
| 						logical_OR_expression OR logical_AND_expression 			{printf("LOGICAL OR EXPRESSION => LOGICAL OR EXPRESSION '||' LOGICAL AND EXPRESSION PARSED !\n");};	

conditional_expression : logical_OR_expression 										{printf("CONDITIONAL EXPRESSION => LOGICAL OR EXPRESSION PARSED !\n");}
| 						 logical_OR_expression '?' expression ':' conditional_expression 															  {printf("CONDITIONAL EXPRESSION => LOGICAL OR EXPRESSION '?' EXPRESSION ':' CONDITIONAL EXPRESSION PARSED !\n");};

assignment_expression : conditional_expression 										{printf("ASSIGNMENT EXPRESSION => CONDITIONAL EXPRESSION PARSED !\n");}
| 					    unary_expression '=' assignment_expression 					{printf("ASSIGNMENT EXPRESSION => UNARY_EXPRESSION '=' ASSIGNMENT EXPRESSION PARSED !\n");};

expression : assignment_expression 													{printf("EXPRESSION => ASSIGNMENT EXPRESSION PARSED !\n");}

// 2. Declarations
declaration : type_specifier init_declarator ';' 									{printf("DECLARATION => TYPE_SPECIFIER INIT_DECLARATOR ';' PARSED !\n");};

init_declarator : declarator 														{printf("INIT DECLARATOR => DECLARATOR PARSED !\n");}
| 				  declarator '=' initializer 										{printf("INIT DECLARATOR => DECLARATOR '=' INITIALIZER PARSED !\n");};	

type_specifier : VOID 																{printf("TYPE SPECIFIER => VOID PARSED !\n");}
| 			     CHAR 																{printf("TYPE SPECIFIER => CHAR PARSED !\n");}
| 			     INT 																{printf("TYPE SPECIFIER => INT PARSED !\n");}

declarator : pointer direct_declarator 												{printf("DECLARATOR => POINTER DIRECT_DECLARATOR PARSED !\n");}
| 					 direct_declarator 												{printf("DECLARATOR => DIRECT_DECLARATOR PARSED !\n");};

pointer: '*'          												   				{printf("POINTER => '*' PARSED !\n");}
| 	     /* empty */	  															{printf("POINTER => EMPTY PARSED !\n");}
												

direct_declarator : IDENTIFIER 														{printf("DIRECT DECLARATOR => IDENTIFIER PARSED !\n");}
| 					IDENTIFIER '[' INT_CONSTANT ']' 								{printf("DIRECT DECLARATOR => IDENTIFIER '[' INT_CONSTANT ']' PARSED !\n");}
| 					IDENTIFIER '(' ')' 												{printf("DIRECT DECLARATOR => IDENTIFIER '(' ')' PARSED !\n");}
| 					IDENTIFIER '(' parameter_list ')'                               {printf("DIRECT DECLARATOR => IDENTIFIER '(' PARAMETER_LIST ')' PARSED !\n");}

parameter_list : parameter_declaration 												{printf("PARAMETER LIST => PARAMETER_DECLARATION PARSED !\n");}
| 				 parameter_list ',' parameter_declaration 							{printf("PARAMETER LIST => PARAMETER_LIST ',' PARAMETER_DECLARATION PARSED !\n");};

parameter_declaration : type_specifier pointer declarator 							{printf("PARAMETER DECLARATION => TYPE_SPECIFIER POINTER DECLARATOR PARSED !\n");}
| 						type_specifier declarator 									{printf("PARAMETER DECLARATION => TYPE_SPECIFIER DECLARATOR PARSED !\n");}
| 						type_specifier pointer 										{printf("PARAMETER DECLARATION => TYPE_SPECIFIER POINTER PARSED !\n");}
| 						type_specifier 						                        {printf("PARAMETER DECLARATION => TYPE_SPECIFIER PARSED !\n");};

initializer : assignment_expression 			                                    {printf("INITIALIZER => ASSIGNMENT_EXPRESSION PARSED !\n");}

// 3. Statements
statement : compound_statement 														{printf("STATEMENT => COMPOUND_STATEMENT PARSED !\n");}
| 			expression_statement 													{printf("STATEMENT => EXPRESSION_STATEMENT PARSED !\n");}
| 			selection_statement 													{printf("STATEMENT => SELECTION_STATEMENT PARSED !\n");}
| 			iteration_statement 													{printf("STATEMENT => ITERATION_STATEMENT PARSED !\n");}
| 			jump_statement 															{printf("STATEMENT => JUMP_STATEMENT PARSED !\n");};

compound_statement : '{' '}' 														{printf("COMPOUND STATEMENT => '{' '}' PARSED !\n");}
| 					 '{' block_item_list '}' 										{printf("COMPOUND STATEMENT => '{' BLOCK_ITEM_LIST '}' PARSED !\n");};

block_item_list : block_item 						                                {printf("BLOCK ITEM LIST => BLOCK_ITEM PARSED !\n");}
| 				  block_item_list block_item 										{printf("BLOCK ITEM LIST => BLOCK_ITEM_LIST BLOCK_ITEM PARSED !\n");};

block_item : declaration 						                                    {printf("BLOCK ITEM => DECLARATION PARSED !\n");}
| 			 statement 						                                        {printf("BLOCK ITEM => STATEMENT PARSED !\n");};

expression_statement : ';' 						                                    {printf("EXPRESSION STATEMENT => ';' PARSED !\n");}
| 						expression ';' 												{printf("EXPRESSION STATEMENT => EXPRESSION ';' PARSED !\n");};

selection_statement : IF '(' expression ')' statement 								{printf("SELECTION STATEMENT => IF '(' EXPRESSION ')' STATEMENT PARSED !\n");}
| IF '(' expression ')' statement ELSE statement 						            {printf("SELECTION STATEMENT => IF '(' EXPRESSION ')' STATEMENT ELSE STATEMENT PARSED !\n");}

expression_opt: expression 					                                        {printf("EXPRESSION OPT => EXPRESSION PARSED !\n");}
| 				/* empty */ 														{printf("EXPRESSION OPT => EMPTY PARSED !\n");};

iteration_statement : FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement 																		   {printf("ITERATION STATEMENT => FOR '(' EXPRESSION_OPT ';' EXPRESSION_OPT ';' EXPRESSION_OPT ')' STATEMENT PARSED !\n");}

jump_statement : RETURN ';' 						                                {printf("JUMP STATEMENT => RETURN ';' PARSED !\n");}
| 				 RETURN expression ';' 						                    	{printf("JUMP STATEMENT => RETURN EXPRESSION ';' PARSED !\n");}

// 4. Translation unit
translation_unit : external_declaration 						                    {printf("TRANSLATION UNIT => EXTERNAL_DECLARATION PARSED !\n");}
| translation_unit external_declaration 						                    {printf("TRANSLATION UNIT => TRANSLATION_UNIT EXTERNAL_DECLARATION PARSED !\n");};

external_declaration : function_definition 						                 	{printf("EXTERNAL DECLARATION => FUNCTION_DEFINITION PARSED !\n");}
| 				       declaration 													{printf("EXTERNAL DECLARATION => DECLARATION PARSED !\n");};

function_definition : type_specifier declarator declaration_list compound_statement 																 {printf("FUNCTION DEFINITION => TYPE_SPECIFIER DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT PARSED !\n");}
| 					  type_specifier declarator compound_statement  				{printf("FUNCTION DEFINITION => TYPE_SPECIFIER DECLARATOR COMPOUND_STATEMENT PARSED !\n");};

declaration_list : declaration 						                                {printf("DECLARATION LIST => DECLARATION PARSED !\n");}
| 				   declaration_list declaration 									{printf("DECLARATION LIST => DECLARATION_LIST DECLARATION PARSED !\n");};

%%

void yyerror(char *s) {
	printf ("ERROR IS : %s",s);
}