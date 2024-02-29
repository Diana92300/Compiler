%{
#include <iostream>
#include "ast.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
 
int semnal=0;
int semnal1=0;
int semnal2=0;
int semnal_functie=0;
int semnal_array_params=0;
int semnal_apel_functie=0;
int ok_clol=0;
int sunt_in_main=0;
int sunt_in_bool_expr=0;
%}
%union {
     char* string;
     class Node* AST;
}
%token START_CLS STOP_CLS START_GBVARS STOP_GBVARS START_GBFNS STOP_GBFNS START_MAIN STOP_MAIN
%token<string> CLASS ID CONST TYPE ASSIGN INT FLOAT CHAR STRING BOOL OP RETURN BOOL_OP NOT LOGIC_GATE IF FOR WHILE CLASS_OP EVAL TYPEOF PRIO_OP
%left OP 
%left PRIO_OP
%left NOT
%left BOOL_OP 
%left LOGIC_GATE
%type<AST> arthm_expr operand bool_expr bool_operand value
%start clol
%%
val_decl       : TYPE ID  { if(search_variables($2)==true)
                               {set_tip($1);
                               add_information_variable($2,1,0);} 
                            else 
                                {printf("Variabila  %s  de la linia %d a fost deja declarata\n",$2, yylineno);
                                  ok_clol=1;}
                            }              
              
               | TYPE ID ASSIGN value {  if(search_variables($2)==true) 
                                             {set_tip($1); 
                                             add_information_variable($2,1,1);} 
                                        else  
                                            {printf("Variabila  %s  de la linia %d a fost deja declarata\n",$2, yylineno);
                                             ok_clol=1;}
                                        left_type_is($2);
                                        if(right_type_equal_left_type()==false)
                                        {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                        ok_clol=1;}
                                        } 
               
               | CONST TYPE ID ASSIGN value { if(search_variables($3)==true) 
                                                {set_tip($2); 
                                                 add_information_variable($3,1,1);} 
                                              else 
                                                 {printf("Variabila  %s  de la linia %d a fost deja declarata\n",$3, yylineno);
                                                 ok_clol=1;}
                                                 left_type_is($3);
                                                 if(right_type_equal_left_type()==false)
                                                  {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                                  ok_clol=1;}
                                             }
               ;

array_decl     : TYPE ID '[' INT ']' { if(search_variables($2)==true)
                                          {set_tip($1); 
                                           add_information_variable($2,1,0);} 
                                        else 
                                            {printf("Variabila  %s  de la linia %d a fost deja declarata\n",$2, yylineno);
                                            ok_clol=1;}
                                             } 

               | TYPE ID '[' INT ']' ASSIGN '{' {semnal_array_params=1;} array_params { semnal_array_params=0; } '}' 
                                                                {if(search_variables($2)==true)
                                                                    {set_tip($1); 
                                                                    add_information_variable($2,1,0);
                                                                     int aux=atoi($4);
                                                                    if(nr_of_params_for_array()>aux)
                                                                         { printf("Array ul %s  de la linia %d a primit mai multe valori decat maximul posibil declarat\n",$2, yylineno);
                                                                            ok_clol=1;}
                                                                    make_string_for_array();
                                                                    delete_parametrii_for_array();
                                                                    }
                                                                  else
                                                                     {printf("Variabila  %s  de la linia %d a fost deja declarata\n",$2, yylineno);
                                                                     ok_clol=1;}
                                                                     left_type_is($2);
                                                                 if(right_type_equal_left_type()==false||verificaTipuriConcidente()==false)
                                                                     {  if(verificaTipuriConcidente()==false)
                                                                            {printf("Valorile din array  de  la linia %d nu au aceelasi tip\n",yylineno);
                                                                             delete_tip_parametrii_for_array();
                                                                             ok_clol=1;
                                                                            }
                                                                        else
                                                                        if(right_type_equal_left_type()==false)
                                                                          { printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                                                           ok_clol=1;}
                                                                      
                                                                     }
                                                                   } 
               
               | CONST TYPE ID '[' INT ']' ASSIGN '{' {semnal_array_params=1;} array_params { semnal_array_params=0; } '}' 
                                                                       {if(search_variables($3)==true)
                                                                           {set_tip($2);
                                                                            add_information_variable($3,1,0);
                                                                             int aux=atoi($5);
                                                                             if(nr_of_params_for_array()>aux)
                                                                               {printf("Array ul %s  de la linia %d a primit mai multe valori decat maximul posibil declarat\n",$2, yylineno);
                                                                                ok_clol=1;}                                                                             
                                                                              make_string_for_array();
                                                                              delete_parametrii_for_array(); 
                                                                          }
                                                                        else
                                                                            {printf("Variabila  %s  de la linia %d a fost deja declarata\n",$3,yylineno);
                                                                             ok_clol=1;}
                                                                            left_type_is($3);
                                                                 if(right_type_equal_left_type()==false||verificaTipuriConcidente()==false)
                                                                     {  if(verificaTipuriConcidente()==false)
                                                                            {printf("Valorile din array  de  la linia %d nu au aceelasi tip\n",yylineno);
                                                                             delete_tip_parametrii_for_array();
                                                                             ok_clol=1;
                                                                            }
                                                                        else
                                                                        if(right_type_equal_left_type()==false)
                                                                            {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                                                            ok_clol=1;}
                                                                     }
                                                                       }   
                                                                      
               ;
          
array_params   : value 
               | value ',' array_params
               ;

array_call     : ID '[' INT ']' {what_id($1);
                                  if(semnal_array_params==1)
                                  {
                                    params_for_arrays($1); 
                                    tip_for_arrays (return_type($1));
                                  }
                                if(semnal==1)
                                       {put_parametrii_1(verify_operand($1)); 
                                       semnal=0;}
                                
                               if(see_if_variable_is_declarated($1)==false)
                                    {if(semnal_functie==1&&see_if_variable_is_parameter($1)==false||semnal_functie==0)
                                       {printf("Variabila  %s folosita  la linia %d nu a fost declarata anterior\n",$1, yylineno); 
                                        ok_clol=1;}
                                    }
                                else 
                                    left_type_is($1);
                                    
                                char* d=verify_operand($1);

                                 if(search_if_are_the_same(d)==true)
                                    put_operand(d);
                               else 
                                    {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",$1, yylineno);
                                    ok_clol=1;}
                                    right_type_is($1); 
                                    set_current_value($1); 
                                    }
               ;

val_assign     : ID { if(see_if_variable_is_declarated($1)==false)
                          {if(semnal_functie==1&&see_if_variable_is_parameter($1)==false||semnal_functie==0)
                            { printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",$1, yylineno);
                             ok_clol=1;}
                            }
                    }
                 ASSIGN value
                        {
                            update_value($1);
                             if(see_if_variable_is_declarated($1)==true)
                             {left_type_is($1);
                             if(right_type_equal_left_type()==false)
                              {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                              ok_clol=1;}
                              else
                                update_value($1);
                        }}
               | class_call{semnal1=1;} ASSIGN {delete_operand();} value {if(right_type_equal_left_type()==false)
                                             {printf("Variabila din stanga a expresiei de  la linia %d\n nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                             ok_clol=1;}
                                              else
                                                update_value(what_id_1());
                                                  semnal1=0;
                                                  }
               | array_call  ASSIGN value {if(right_type_equal_left_type()==false)
                                            { printf("Variabila din stanga a expresiei de  la linia %d\n nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                            ok_clol=1;}
                                            else
                                               update_value(what_id_1());
                                            }
               ;

operand        : arthm_expr {$$ = $1;}
               | INT {char a[10]="int";
                     if(search_if_are_the_same(a)==true) 
                         put_operand(a);
                     else 
                          {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",$1, yylineno);
                          ok_clol=1;}
                     $$ = Init(nullptr, nullptr, $1);
                          } 
               | FLOAT {char b[10]="float";
                         if(search_if_are_the_same(b)==true) 
                            put_operand(b);
                         else
                             {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",$1, yylineno);
                             ok_clol=1;}
                         $$ = Init(nullptr, nullptr, $1);
                             }
               | ID {if(see_if_variable_is_declarated($1)==false)
                      {if(semnal_functie==1&&see_if_variable_is_parameter($1)==false||semnal_functie==0)
                        {printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",$1, yylineno);
                        ok_clol=1;}}
                    else 
                       { char* c=verify_operand($1);
                         if(search_if_are_the_same(c)==true)
                            put_operand(c); 
                         else 
                             {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",$1, yylineno);
                             ok_clol=1;}}
                    $$ = Init(nullptr, nullptr, $1);
                             }
               | class_call {$$ = Init(nullptr, nullptr, (char*)"null");}
               | fn_call {char* g=put_operand_from_arthm_vector();
                         if(search_if_are_the_same(g)==true)
                            put_operand(g); 
                         else 
                             {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",put_operand_name_from_arthm_vector(), yylineno);
                             ok_clol=1;}
                         $$ = Init(nullptr, nullptr, (char*)"null");
                             }
               | array_call {$$ = Init(nullptr, nullptr, (char*)"null");}
               ;



arthm_expr     :  operand OP operand  {$$ = Init($1, $3, $2);}
               | '(' operand OP operand ')' {$$ = Init($2, $4, $3);}
               |  operand PRIO_OP operand  {$$ = Init($1, $3, $2);}
               | '(' operand PRIO_OP operand ')'  {$$ = Init($2, $4, $3);}
               ; 

bool_operand   : value BOOL_OP value {$$ = Init($1, $3, $2);}
               | '(' value BOOL_OP value ')' {$$ = Init($2, $4, $3);}
               | NOT value {$$ = Init($2, nullptr, $1);}
               | value {$$ = $1;}
               | '(' NOT value ')' {$$ = Init($3, nullptr, $2);}
               ;

bool_expr      : bool_operand {$$ = $1;}
               | bool_expr LOGIC_GATE bool_expr {$$ = Init($1, $3, $2);}
               | '(' bool_expr LOGIC_GATE bool_expr ')' {$$ = Init($2, $4, $3);}
               ; 

value          : INT {    if(semnal_array_params==1)
                            {
                               params_for_arrays($1);  
                               tip_for_arrays ((char *)"int");
                            }
                        if(semnal_apel_functie==0)
                         set_current_value($1);
                        else
                          set_current_value((char*)"return_unknown");
                        right_type_is((char*)"int");
                        if(return_ok_params_call()==1)
                            put_parametrii((char *)"int"); 
                            
                        $$ = Init(nullptr, nullptr, $1);    
                            }
               | FLOAT { 
                          if(semnal_array_params==1)
                            {
                               params_for_arrays($1);
                               tip_for_arrays ((char *)"float");
    
                            }
                         if(semnal_apel_functie==0)
                         set_current_value($1);
                         else
                          set_current_value((char*)"return_unknown");
                         right_type_is((char*)"float");

                         if(return_ok_params_call()==1) 
                             put_parametrii((char *)"float"); 
                             
                          $$ = Init(nullptr, nullptr, $1);
                             }
               | CHAR { if(semnal_array_params==1)
                            {
                               params_for_arrays($1);
                               tip_for_arrays ((char *)"char");
    
                            }
                         if(semnal_apel_functie==0)
                         set_current_value($1);
                         else
                          set_current_value((char*)"return_unknown");
                        right_type_is((char*)"char");
                         if(return_ok_params_call()==1) 
                             put_parametrii((char *)"char"); 
                             
                          $$ = Init(nullptr, nullptr, (char*)"null");
                             }
               | STRING { if(semnal_array_params==1)
                            {
                               params_for_arrays($1); 
                               tip_for_arrays ((char *)"string");
   
                            }
                         if(semnal_apel_functie==0)
                         set_current_value($1);
                         else
                          set_current_value((char*)"return_unknown");
                          right_type_is((char*)"string");
                           if(return_ok_params_call()==1) 
                             put_parametrii((char *)"string"); 
                             
                             $$ = Init(nullptr, nullptr, (char*)"null");
                             }
               | BOOL {  if(semnal_array_params==1)
                            {
                               params_for_arrays($1); 
                               tip_for_arrays ((char *)"bool");


                            }
                            if(semnal_apel_functie==0)
                                set_current_value($1); 
                            else
                            set_current_value((char*)"return_unknown");
                             right_type_is((char*)"bool");
                             if(return_ok_params_call()==1)  
                             put_parametrii((char *)"bool");
                             
                            $$ = Init(nullptr, nullptr, $1); 
                             }
               | ID {if(see_if_variable_is_declarated($1)==false)
                      {if(semnal_functie==1&&see_if_variable_is_parameter($1)==false||semnal_functie==0)
                       {printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",$1, yylineno);
                       ok_clol=1;}}
                       right_type_is_id($1);
                       
                       if(return_ok_params_call()==1) 
                          put_parametrii_1($1); 
                       
                       $$ = Init(nullptr, nullptr, $1);
                       }
                | arthm_expr {
                             if(search_if_are_ALL_the_same()==true) 
                                right_type_arthm(); 
                              set_current_value((char *)"undefined");
                             if(return_ok_params_call()==1)
                                 put_parametrii(right_type_arthm_1()) ;
                             delete_operand();
                             if(sunt_in_bool_expr){
                                $$ = $1;
                             }
                             else if(sunt_in_main && !ok_clol){
                                //afisare($1);
                                std::string response = procesator($1);
                                set_current_value((char*)response.c_str());
                                printf("Value of expression at line %d is %s\n", yylineno, response.c_str());
                             }
                             }
               | fn_call   {$$ = Init(nullptr, nullptr, (char*)"null");}
               | class_call {delete_operand(); $$ = Init(nullptr, nullptr, (char*)"null");} 
               | array_call  {$$ = Init(nullptr, nullptr, (char*)"null");} 
                          
               ;
          
if_stmt        : begin_if end_if
               ;

begin_if       : IF '(' bool_expr ')' '{' 
               ;

end_if         : code_block '}'
               ;

while_stmt     : begin_while end_while
               ;

begin_while    : WHILE '(' bool_expr ')' '{'
               ;

end_while      : code_block '}'
               ;

for_stmt       : begin_for end_for
               ;

begin_for      : FOR '(' val_decl ';' bool_expr ';' arthm_expr {delete_operand();} ')' '{'
               | FOR '(' val_assign ';' bool_expr ';' arthm_expr {delete_operand();} ')' '{'
               | FOR '(' val_decl ';' bool_expr ';' val_assign ')' '{'
               | FOR '(' val_assign ';' bool_expr ';' val_assign ')' '{'
               ;
     
end_for        : code_block '}'
               ;

fn_call        : ID {if(semnal==1) {put_parametrii_1(verify_return_type($1)); semnal=0;}} '(' {ok_params_call(1); semnal=1; semnal_apel_functie=1;}   params_call { semnal_apel_functie=0; ok_params_call(0); semnal=0;} ')'
                                             {if(see_if_function_is_declarated($1)==false) 
                                                 { printf("Apelul %s de functie  la linia %d foloseste o functie nedefinita\n",$1, yylineno); 
                                                 ok_clol=1;}
                                              else 
                                                  {char* f=verify_return_type($1);
                                                   right_type_function($1);
                                                   
                                                
                                               if(type_parameters_equal_type_call_parameters_1($1)==false)
                                                    {printf("Apelul de functie %s de la linia %d nu are suficienti parametrii\n",$1, yylineno); 
                                                    ok_clol=1;}
                                                else  
                                                    {
                                                         if(type_parameters_equal_type_call_parameters($1)==false)
                                                           {printf("Apelul de functie %s de la linia %d contine parametrii ce nu corespund tipului dat la declarare\n",$1, yylineno); 
                                                           ok_clol=1;}

                                                    }}
                                              delete_parametrii();
                                              add_fn_to_arthm_vector($1);
                                              }
                
                | ID CLASS_OP ID {if(semnal==1) {put_parametrii_1(verify_return_type($3)); semnal=0;}} '(' {ok_params_call(1); semnal=1;}   params_call { ok_params_call(0); semnal=0;} ')' 
                                             {if(see_if_function_is_declarated($3)==false) 
                                                  {printf("Apelul %s de functie  la linia %d foloseste o functie nedefinita\n",$3, yylineno); 
                                                  ok_clol=1;}
                                              else 
                                                  {char* f=verify_return_type($3);
                                                   right_type_function($3);
                                                   
                                                
                                               if(type_parameters_equal_type_call_parameters_1($3)==false)
                                                    {printf("Apelul de functie %s de la linia %d nu are suficienti parametrii\n",$3, yylineno); 
                                                    ok_clol=1;}
                                                else  
                                                    {
                                                         if(type_parameters_equal_type_call_parameters($3)==false)
                                                           {printf("Apelul de functie %s de la linia %d contine parametrii ce nu corespund tipului dat la declarare\n",$3, yylineno); 
                                                           ok_clol=1;}

                                                    }}
                                              delete_parametrii();
                                              add_fn_to_arthm_vector($3);
                                              }
               ;

params_call    :  value  
               |   value  ','  params_call 
               | /* Empty */
               ;

class_call     : ID CLASS_OP ID  {    what_id($3);
                                      if(semnal_array_params==1)
                                       {
                                          params_for_arrays(return_value($3));
                                          tip_for_arrays (return_type($3));
    
                                       }
                                      if(verify_if_variable_exist_in_class($1,$3)==false||verify_if_function_exist_in_class($1,$3)==false)
                                        {  if(verify_if_variable_exist_in_class($1,$3)==false)
                                              {printf("Variabila %s folosita  la linia %d nu appartine clasei %s\n",$3, yylineno,$1);
                                              ok_clol=1;}
                                           if(verify_if_function_exist_in_class($1,$3)==false)
                                             {printf("Functia %s folosita  la linia %d nu appartine clasei %s\n",$3,yylineno,$1); 
                                             ok_clol=1;}
                                        }
                                    else
                                     {if(semnal==1)
                                       {put_parametrii_1(verify_operand($3)); 
                                       semnal=0;}
                                    if(see_if_variable_is_declarated($3)==false)
                                     {  
                                          if(semnal_functie==1&&see_if_variable_is_parameter($3)==false||semnal_functie==0)
                                         {printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",$3, yylineno); 
                                         ok_clol=1;}
                                     }
                                    else 
                                   { char* e=verify_operand($3); 
                                     if(semnal1==0)
                                       left_type_is($3);
                                     else 
                                       right_type_is_id($3);
                                     
                                     if(search_if_are_the_same(e)==true)
                                         put_operand(e); 
                                     else 
                                         {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",$3, yylineno);
                                         ok_clol=1;}
                                       
                                      }
                                     }
                                   
                                 }
               ;

code_block     : statement code_block 
               | /* Empty */
               ;

statement      : val_decl ';'
               | array_decl ';'
               | val_assign ';'
               | if_stmt
               | while_stmt
               | for_stmt
               | begin_eval mid_eval end_eval
               | begin_typeof mid_typeof end_typeof
               | fn_call ';' 
               ;

begin_eval     : EVAL '(' {sunt_in_bool_expr=1;}
               ;

mid_eval       : bool_expr
                            {if(sunt_in_main && !ok_clol){
                                //afisare($1);
                                std::string response = procesator($1);
                                set_current_value((char*)response.c_str());
                                printf("Value of expression at line %d is %s\n", yylineno, response.c_str());
                                sunt_in_bool_expr=0;
                             }}
               ;

end_eval       : ')' ';'
               ;

begin_typeof   : TYPEOF '(' {sunt_in_bool_expr=1;}
               ;

mid_typeof     : bool_expr
                            {if(sunt_in_main && !ok_clol){
                                //afisare($1);
                                std::string response = procesator($1);
                                set_current_value((char*)response.c_str());
                                printf("Value of expression at line %d is %s\n", yylineno, response.c_str());
                                printf("TypeOf expression at line %d is %s\n", yylineno, TypeOf(response));
                                sunt_in_bool_expr=0;
                             }}
               ;

end_typeof     : ')' ';' 
               ;

return_stmt    : RETURN '(' value ')' ';'
               | /* Empty */

fn_decl        : begin_fn end_fn
               ;

begin_fn       : TYPE ID {where_am_i($2);} '(' params ')' {add_information_function($2,$1); semnal_functie=1; name_for_actual_function($2);} '{'
               ;

end_fn         : code_block {where_am_i_stop();} return_stmt '}' {semnal_functie=0;}
               ;
     
params         : param
               | param ',' params
               | /* Empty */ {parameters();}
               ;

param          : TYPE ID {add_parameters($2,$1);}
               ;

clol           : cls gb_vars gb_fns main {
                          if(ok_clol==0){
                            print1();
                            print();
                            printf("The programme is correct!\n");
                          }
                          else{
                            clear_table();
                          }
                          }
               ;

cls            : START_CLS cls_decl STOP_CLS
               | /* Empty */
               ;
     
cls_decl       : cl_decl ';' 
               | cls_decl cl_decl ';'
               ;

cl_decl        : begin_cl end_cl {where_am_i_stop(); class_now((char*)"(null)");} 
               ;

begin_cl       : CLASS ID { set_actual_name_class($2);
                            where_am_i($2);
                            class_now($2);
                            if(search_variables($2)==true) 
                               add_information_variable($2,0,0); 
                            else 
                               {printf("Clasa  %s a fost deja declarata la linia %d\n",$2, yylineno);  
                               ok_clol=1;}
                            } '{'
               ;

end_cl         : val_decl  ';' end_cl 
               | array_decl ';' end_cl 
               | fn_decl  ';' end_cl 
               | '}' ID {reset_name_class($2);}
               ;

gb_vars        : START_GBVARS gb_vars_decl STOP_GBVARS
               | /* Empty */
               ;

gb_vars_decl   : val_decl ';'
               | array_decl ';'
               | gb_vars_decl val_decl ';'
               | gb_vars_decl array_decl ';'
               ;

gb_fns         : START_GBFNS gb_fns_decl STOP_GBFNS
                | /* Empty */
               ;

gb_fns_decl    : fn_decl
               | gb_fns_decl fn_decl;
               ;

main           : START_MAIN {sunt_in_main=1;} fn_decl STOP_MAIN
                | /* Empty */
               ;

%%
void yyerror(const char* error){
     printf("error: %s at line:%d\n", error, yylineno);
}
int main(int argc, char** argv)
{
     yyin=fopen(argv[1],"r");
     yyparse();
} 