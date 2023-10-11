%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char* s);
extern int line;
FILE* parsed;
FILE* seq;
int flag = 0 ;
int return_call = 0 ;   

%}

%union {
    char* strval;
}

%start program

%token IF 
%token DO
%token ELSE 
%token WHILE
%token FOR 
%token CLASS 
%token METHOD 
%token DECLARATION
%token EXPRESSION
%token CALL_STMT
%token RETURN 
%token RETURN_TYPE_FUNC 
%token LC_BRACE
%token RC_BRACE
%token LP_BRACE
%token RP_BRACE
%token ASSIGN
%token NEG
%token ADD
%token SUB
%token MUL
%token DIV

%token LOOP
%token POSTINCR
%token POSTDECR
%token INTEGERS
%token ID
%token SEMICOLON
%token CALL_OP
%token PREDICATE_OP
%token LSQ_BRACE
%token RSQ_BRACE
%token COMMA
%token VOID
%token ARGUMENTS
%token AND
%token OR
/* %token TRUE_KEY */
/* %token FALSE_KEY */

%left PREDICATE_OP AND OR NEG 
%right ASSIGN

%%
program : program func | func ; 

            
func : func_method     
     | func_class      
      

func_method : METHOD VOID ID LP_BRACE RP_BRACE 
            {
                fprintf(parsed," : function definition"); 
                flag = 0;
                return_call = 0;
            }
            LC_BRACE body 
            {
                if((flag == 0) && (return_call == 0)){
                fprintf(parsed,"Error:No return statement\n");
                exit(1);
                }
                printf("%d\n",flag);
                printf("%d\n",return_call);
            } RC_BRACE  
            | METHOD RETURN_TYPE_FUNC ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE args RP_BRACE 
            {
                fprintf(parsed," : function definition"); 
                flag =0;
                return_call==0;
            }LC_BRACE body  
            {
                if(flag==0 && return_call==0){
                fprintf(parsed,"Error:No return statement\n");
                exit(1);
                }
            } RC_BRACE 
            
            
args : args COMMA arg|arg 

arg : RETURN_TYPE_FUNC ID 


func_class: CLASS ID LP_BRACE RP_BRACE {fprintf(parsed," : class definition");}  LC_BRACE body_class RC_BRACE
     | CLASS ID LSQ_BRACE ARGUMENTS RSQ_BRACE {fprintf(parsed," : class definition");}  LC_BRACE body_class_methods RC_BRACE
     
body : LC_BRACE body RC_BRACE | body_method
/* body_method : LC_BRACE body_method_1 RC_BRACE */
body_method :  body_method rest | rest

/* rest_m : LC_BRACE rest_m RC_BRACE | rest */
rest : decls 
     | stmts
     | exp_stmt
     | calls
     | return_stmt {flag++;}
     | return_stmt_void {flag++;} 
     | RETURN {return_call++;} calls 

body_class : body_class rest_class | rest_class 
rest_class : unary_stmts SEMICOLON|  decls 

body_class_methods : body_class_methods rest_class_methods | rest_class_methods
rest_class_methods : stmts |decls | exp_stmt | calls | func_method 

return_stmt : RETURN RETURN_TYPE_FUNC SEMICOLON   {fprintf(parsed," : return statement");}

return_stmt_void : RETURN VOID SEMICOLON    {fprintf(parsed," : return statement");}

/* stmts_scope : LC_BRACE stmts_scope RC_BRACE | stmts */

stmts : loops | cond_stmts | unary_stmts SEMICOLON 

loops : LOOP WHILE LP_BRACE predicate RP_BRACE {fprintf(parsed," : loop");} DO LC_BRACE body RC_BRACE              
     | FOR LP_BRACE exp_stmt predicate SEMICOLON unary_stmts  RP_BRACE {fprintf(parsed," : loop");} LC_BRACE body RC_BRACE
     | FOR LP_BRACE exp_stmt predicate SEMICOLON  RP_BRACE {fprintf(parsed," : loop");} LC_BRACE body RC_BRACE
      

cond_stmts : if_stmt otherwise_stmt | if_stmt  

if_stmt : IF LP_BRACE predicate  RP_BRACE {fprintf(parsed," : conditional statement");} DO LC_BRACE body RC_BRACE             
otherwise_stmt : ELSE {fprintf(parsed," : conditional statement");} LC_BRACE body RC_BRACE   



decls : DECLARATION RETURN_TYPE_FUNC dec SEMICOLON   {fprintf(parsed," :  declaration statement");}
      | DECLARATION ID dec SEMICOLON       {fprintf(parsed," :  declaration statement");}

dec:  dec COMMA ID| ID

/* exp_scope : LC_BRACE exp_scope RC_BRACE | exp_stmt */

exp_stmt : EXPRESSION ID ASSIGN assign_exp SEMICOLON     {fprintf(parsed," :  expression statement");}
          
assign_exp :  unary_stmts | INTEGERS | ARGUMENTS | ID   | 'true' | 'false'        
          | ADD LP_BRACE assign_exp COMMA assign_exp RP_BRACE
          | SUB LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | MUL LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | DIV LP_BRACE assign_exp COMMA assign_exp RP_BRACE
          | LP_BRACE assign_exp RP_BRACE


calls :CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE INTEGERS RP_BRACE SEMICOLON  
        {
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT 'this' CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE INTEGERS RP_BRACE SEMICOLON 
       {
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE ARGUMENTS RP_BRACE SEMICOLON  
       {
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT 'this' CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE ARGUMENTS RP_BRACE SEMICOLON  
        {
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT ID CALL_OP ID LP_BRACE RP_BRACE SEMICOLON   
        {
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT ID LP_BRACE RP_BRACE SEMICOLON   
        {
            if(return_call==0){
            fprintf(parsed," : call statement");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE INTEGERS RP_BRACE SEMICOLON  
        {
            if(return_call==0){
            fprintf(parsed," : call statement");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
      | CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE ARGUMENTS RP_BRACE SEMICOLON  
        {
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }




unary_stmts : POSTINCR LP_BRACE extras RP_BRACE | POSTDECR LP_BRACE extras RP_BRACE  

predicate: predicate AND predicate
        | predicate OR predicate
        | predicate PREDICATE_OP predicate 
        | LP_BRACE predicate RP_BRACE 
        | expr_pred  


expr_pred: arth_pred
          | NEG expr_pred 
          | expr_pred ASSIGN NEG expr_pred 
          | calls


arth_pred:ADD LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | SUB LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | MUL LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | DIV LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | extras
    

extras: | unary_stmts
    | ID 
    | INTEGERS
    | ARGUMENTS
%%

int main() {
    parsed = fopen("parsed.txt", "w");
    seq = fopen("seq.txt", "w");
    yyparse();
    return 0;
}

void yyerror(const char* s) {
    fprintf( parsed," : Error at line %d : %s\n",line, s);
    exit(1);
}