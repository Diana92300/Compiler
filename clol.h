// ex2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern char *yytext;
int is_variable; // 0 pt e functie si 1 pt e variabila

struct information_variable
{
    char *name;
    char *type;
    std::string value;
    char *function_or_class;
};
struct parameter
{
    char *name;
    char *type;
};
struct information_function
{
    char *name;
    char *returned_type;
    parameter x[10];
    int nr_x;
    char *class_def;
};
information_variable variable[100];
information_function function[100];
FILE *symbol_table;
int count, count1;
int in_class_or_function;
int nr;
int is_empty;
char *valoare;
char *tipul;
char *locatie;
int ok;
char *clasa_acum = NULL;
int semafor;
char operanzi[30][30]; // Veți stoca tipurile operandelor, nu adresele lor
int operand_i = 0;
char parametrii[30][30]; // Veți stoca tipurile operandelor, nu adresele lor
int parametrii_i = 0;
char parametrii_pt_array[30][30];
int parametrii_i_pt_array = 0;
char tip_pt_array[30][30];
int tip_i_pt_array = 0;
char *vector_arhm_expr;
char *vector_arhm_expr_name;
int parametrii_da_sau_nu;
char *left_type;
char *right_type;
char *name_function;
char *nume_i;
int stanga_sau_dreapta;
char *id_actual;
char *default_int = (char*)"0";
char *default_float = (char*)"0.0";
char *default_char = (char*)"\\0";
char *default_string = (char*)"NULL";
char *default_bool = (char*)"true_b";

void set_current_value(char *x)
{
    valoare = x;
}
void where_am_i_stop()
{
    in_class_or_function = 0;
}
void where_am_i(char *x)
{
    in_class_or_function = 1;
    locatie = x;
}
void set_tip(char *x)
{
    tipul = x;
}
void add_information_variable(char *nume, int ok1, int ok)
{
    variable[count].name = nume;
    if (ok1 == 1)
        variable[count].type = tipul;
    else
        variable[count].type = NULL;
    if (ok == 1)
        variable[count].value = valoare;
    else
    {
        variable[count].value = "(null)";
    }
    if (in_class_or_function == 1)
    {
        variable[count].function_or_class = locatie;
    }
    count++;
}
void print()
{ // symbol_table=fopen("tabel_simboluri.txt","w");
    fprintf(symbol_table, "\n\nNume:               \t\tTip:                \t\tValoare:            \t\tClasa/Functie:\n");
    for (int i = 0; i < count; i++)
    {
        if (variable[i].value == "(null)" && variable[i].type!=NULL)
        { 
            if (strcmp(variable[i].type, "int") == 0)
                variable[i].value = default_int;
            else
                if (strcmp(variable[i].type, "float") == 0)
                variable[i].value = default_float;
                else
                   if (strcmp(variable[i].type, "char") == 0)
                     variable[i].value = default_char;
                     else
                         if (strcmp(variable[i].type, "string") == 0)
                              variable[i].value = default_string;
                              else
                                  if (strcmp(variable[i].type, "bool") == 0)
                                       variable[i].value = default_bool;
        }
        fprintf(symbol_table, "%-20s\t\t%-20s\t\t%-20s\t\t%-20s\n",
        variable[i].name,
        variable[i].type,
        variable[i].value.c_str(),
        variable[i].function_or_class);
    }
    fclose(symbol_table);
}
void parameters()
{
    is_empty = 1;
}
void class_now(char *nume)
{
    clasa_acum = nume;
}
void add_parameters(char *nume, char *tip)
{
    function[count1].x[nr].name = nume;
    function[count1].x[nr].type = tip;
    nr++;
}
void add_information_function(char *nume, char *tip)
{
    function[count1].name = nume;
    function[count1].returned_type = tip;
    function[count1].class_def = clasa_acum;
    function[count1].nr_x = nr;
    count1++;
    nr = 0;
}
void print1()
{
    symbol_table = fopen("tabel_simboluri.txt", "w");
    fprintf(symbol_table, "Nume:               \t\tTip_return:         \t\tClasa:             \t\t\tParametrii:\n");
    for (int i = 0; i < count1; i++)
    {
        fprintf(symbol_table, "%-20s\t\t%-20s\t\t%-20s\t\t", function[i].name, function[i].returned_type, function[i].class_def);
        for (int j = 0; j < function[i].nr_x; j++)
            fprintf(symbol_table, "%s %s\t", function[i].x[j].name, function[i].x[j].type);
        fprintf(symbol_table, "\n");
    }
}
bool search_variables(char *x)
{
    for (int i = 0; i < count; i++)
        if (strcmp(variable[i].name, x) == 0)
            return false;
    return true;
}
bool see_if_variable_is_declarated(char *x)
{
    for (int i = 0; i < count; i++)
        if (strcmp(variable[i].name, x) == 0)

            return true;
    return false;
}
void name_for_actual_function(char *x)
{
    name_function = x;
}
bool see_if_variable_is_parameter(char *x)
{
    for (int i = 0; i < count1; i++)
    {
        if (strcmp(name_function, function[i].name) == 0)
            for (int j = 0; j < function[i].nr_x; i++)
                if (strcmp(function[i].x[j].name, x) == 0)
                    return true;
    }
    return false;
}
bool see_if_function_is_declarated(char *x)
{
    for (int i = 0; i < count1; i++)
        if (strcmp(function[i].name, x) == 0)
            return true;
    return false;
}
bool search_if_are_the_same(char *x)
{

    for (int i = 0; i < operand_i; i++)
    {
        if (strcmp(x, operanzi[i]) != 0)
        {
            return false;
        }
    }
    return true;
}
void put_operand(char *x)
{
    strcpy(operanzi[operand_i], x); // Copiază tipul operandului în vector
    operand_i++;
}
void delete_operand()
{
    for (int i = 0; i < operand_i; i++)
    {
        strcpy(operanzi[i], "\0"); // Eliberează conținutul fiecărui element
    }

    operand_i = 0; // Resetarea contorului
}
void ok_params_call(int ok)
{
    parametrii_da_sau_nu = ok;
}
int return_ok_params_call()
{
    return parametrii_da_sau_nu;
}
void put_parametrii(char *x)
{
    strcpy(parametrii[parametrii_i], x); // Copiază tipul operandului în vector
    parametrii_i++;
}
void put_parametrii_1(char *x)
{
    for (int i = 0; i < count; i++)
        if (strcmp(variable[i].name, x) == 0)
        {
            strcpy(parametrii[parametrii_i], variable[i].type); // Copiază tipul operandului în vector
            parametrii_i++;
            break;
        }
    for (int i = 0; i < count1; i++)
        if (strcmp(function[i].name, x) == 0)
        {
            strcpy(parametrii[parametrii_i], function[i].returned_type); // Copiază tipul operandului în vector
            parametrii_i++;
            break;
        }
}

void delete_parametrii()
{
    for (int i = 0; i < parametrii_i; i++)
    {
        strcpy(parametrii[i], ""); // Eliberează conținutul fiecărui element
    }
    parametrii_i = 0; // Resetarea contorului
}
bool type_parameters_equal_type_call_parameters_1(char *x)
{
    int nr;
    for (int i = 0; i < count1; i++)
        if (strcmp(function[i].name, x) == 0)
            nr = i;
    if (function[nr].nr_x != parametrii_i)
        return false;
    return true;
}
bool type_parameters_equal_type_call_parameters(char *x)
{
    int nr;
    for (int i = 0; i < count1; i++)
        if (strcmp(function[i].name, x) == 0)
            nr = i;

    for (int i = 0; i < function[nr].nr_x; i++)
        if (strcmp(function[nr].x[i].type, parametrii[i]) != 0)
            return false;
    return true;
}
char *verify_operand(char *x)
{
    for (int i = 0; i < count; i++)
        if (strcmp(variable[i].name, x) == 0)
            return variable[i].type;
    return NULL;
}
char *verify_return_type(char *x)
{
    for (int i = 0; i < count; i++)
        if (strcmp(function[i].name, x) == 0)
            return function[i].returned_type;
    return NULL;
}

void right_type_function(char *x)
{
    right_type = verify_return_type(x);
}
void left_type_is(char *x)
{
    left_type = verify_operand(x);
}
void right_type_is_id(char *x)
{
    right_type = verify_operand(x);
}
void right_type_is(char *x)
{
    right_type = x;
}
void right_type_arthm()
{
    if (strcmp("float", operanzi[0]) == 0)
        right_type = (char *)"float";
    else if (strcmp("int", operanzi[0]) == 0)
        right_type = (char *)"int";
    else if (strcmp("char", operanzi[0]) == 0)
        right_type = (char *)"char";
    else if (strcmp("string", operanzi[0]) == 0)
        right_type = (char *)"string";
    else if (strcmp("bool", operanzi[0]) == 0)
        right_type = (char *)"bool";
}
char *right_type_arthm_1()
{
    if (strcmp("float", operanzi[0]) == 0)
        return (char *)"float";
    else if (strcmp("int", operanzi[0]) == 0)
        return (char *)"int";
    else if (strcmp("char", operanzi[0]) == 0)
        return (char *)"char";
    else if (strcmp("string", operanzi[0]) == 0)
        return (char *)"string";
    else if (strcmp("bool", operanzi[0]) == 0)
        return (char *)"bool";
    return NULL;
}
bool search_if_are_ALL_the_same()
{
    for (int i = 1; i < operand_i; i++)
    {
        if (strcmp(operanzi[0], operanzi[i]) != 0)
        {
            return false;
        }
    }
    return true;
}
bool right_type_equal_left_type()
{

    if (strcmp(left_type, right_type) == 0)
        return true;
    return false;
}
void set_actual_name_class(char *x)
{
    nume_i = x;
}
void reset_name_class(char *x)
{
    for (int i = 0; i < count; i++)
        if (strcmp(variable[i].function_or_class, nume_i) == 0)
            variable[i].function_or_class = x;

    for (int i = 0; i < count1; i++)
        if (strcmp(function[i].class_def, nume_i) == 0)
            function[i].class_def = x;
}
bool verify_if_variable_exist_in_class(char *x, char *y)
{
    for (int i = 0; i < count; i++)
        if (strcmp(y, variable[i].name) == 0)
            if (strcmp(variable[i].function_or_class, x) != 0)
                return false;

    return true;
}
bool verify_if_function_exist_in_class(char *x, char *y)
{
    for (int i = 0; i < count1; i++)
        if (strcmp(y, function[i].name) == 0)
            if (strcmp(function[i].class_def, x) != 0)
                return false;
    return true;
}

void params_for_arrays(char *x)
{
    strcpy(parametrii_pt_array[parametrii_i_pt_array], x);
    parametrii_i_pt_array++;
}

void delete_parametrii_for_array()
{
    for (int i = 0; i < parametrii_i_pt_array; i++)
    {
        strcpy(parametrii_pt_array[i], ""); // Eliberează conținutul fiecărui element
    }
    parametrii_i_pt_array = 0; // Resetarea contorului
}
void tip_for_arrays(char *x)
{
    strcpy(tip_pt_array[tip_i_pt_array], x);
    tip_i_pt_array++;
}
bool verificaTipuriConcidente()
{
    if (tip_i_pt_array < 2)
    {
        return true;
    }
    for (int i = 1; i < tip_i_pt_array; i++)
    {
        if (strcmp(tip_pt_array[0], tip_pt_array[i]) != 0)
        {
            return false;
        }
    }
    return true;
}
void delete_tip_parametrii_for_array()
{
    for (int i = 0; i < tip_i_pt_array; i++)
    {
        strcpy(tip_pt_array[i], ""); // Eliberează conținutul fiecărui element
    }
    tip_i_pt_array = 0; // Resetarea contorului
}

int nr_of_params_for_array()
{
    return parametrii_i_pt_array;
}
void make_string_for_array()
{
    char *result = (char *)malloc(100 * sizeof(char));
    strcpy(result, "{");
    for (int i = 0; i < parametrii_i_pt_array; i++)
    {
        char num_str[10];
        strcat(result, parametrii_pt_array[i]);
        if (i < parametrii_i_pt_array - 1)
        {
            strcat(result, ",");
        }
    }
    strcat(result, "}");
    variable[count - 1].value = result;
}
void add_fn_to_arthm_vector(char *x)
{
    for (int i = 0; i < count1; i++)
        if (strcmp(x, function[i].name) == 0)
        {
            vector_arhm_expr = function[i].returned_type;
            vector_arhm_expr_name = x;
            break;
        }
}
char *put_operand_from_arthm_vector()
{
    return vector_arhm_expr;
}
char *put_operand_name_from_arthm_vector()
{
    return vector_arhm_expr_name;
}
void update_value(char*x)
{
    for(int i=0;i<count;i++)
       {
        if(strcmp(x,variable[i].name)==0)
          variable[i].value=valoare;
       }
}
void what_id(char*x)
{
    id_actual=x;
}
char * what_id_1()
{
    return id_actual;
}
char * return_value(char *x)
{
    for(int i=0;i<count ;i++)
       if(strcmp(x,variable[i].name)==0)
         { 
             return (char*)variable[i].value.c_str();
         }
    return NULL;
        
}
char * return_type(char *x)
{
    for(int i=0;i<count ;i++)
       if(strcmp(x,variable[i].name)==0)
         { 
             return variable[i].type;
         }
    return NULL;
        
}
void clear_table()
{ 
    symbol_table=fopen("tabel_simboluri.txt","w");
    fclose(symbol_table);
}