#include "clol.h"
bool still_ok = true;

class Node{
    public:
        std::string value;
        Node* left;
        Node* right;
        Node(Node* Left, Node* Right, std::string Value){
            this->left = Left;
            this->right = Right;
            this->value = Value;
        }
};

Node* Init(Node* Left, Node* Right, std::string Value){
    still_ok = true;
    return new Node(Left, Right, Value);
}

bool is_float(std::string nr){
    std::size_t found = nr.find('.');
    if(found!=std::string::npos)
        return true;
    return false;
}

std::string procesator(Node* root){
    if(!still_ok)
        return "undefined";

    if(root->left==nullptr && root->right==nullptr){
        if(root->value == "null"){
            still_ok = false;
            return "undefined";
        }
        return root->value;
    }
    else if(root->right==nullptr){
        std::string result;
        std::string result_left = procesator(root->left);
        if(result_left == "undefined")
        {
            still_ok = false;
            return "undefined";
        }
        std::string value1;
        if(!search_variables((char*)result_left.c_str()))
        {
            char* type = verify_operand((char*)result_left.c_str());
            if(type==NULL || !(strcmp(type, "int")!=0 || strcmp(type, "float")!=0 || strcmp(type, "bool")!=0))
            {
                still_ok = false;
                return "undefined";
            }
            char* value_aux = return_value((char*)result_left.c_str());
            if(value_aux==NULL || strcmp(value_aux, "(null)")==0 || strcmp(value_aux, "undefined")==0 || strcmp(value_aux, "return_unknown")==0)
            {
                still_ok = false;
                return "undefined";
            }
            value1 = value_aux;
        }
        else{
            value1 = result_left;
        }

        if(is_float(value1)){
            float f1=std::stof(value1);
            if(f1==0.0)
                result = "true";
            else
                result = "false";
        }
        else if(value1[0]=='t' || value1[0]=='f')
        {
            if(value1[0]=='f')
                result = "true";
            else
                result = "false";
        }
        else{
            float f1=std::stoi(value1);
            if(f1==0)
                result = "true";
            else
                result = "false";
        }

        return result;
    }
    else{
        std::string result;
        std::string result_left = procesator(root->left);
        if(result_left == "undefined")
        {
            still_ok = false;
            return "undefined";
        }
        std::string result_right = procesator(root->right);
        if(result_right == "undefined"){
            still_ok = false;
            return "undefined";
        }

        std::string value1, value2;
        std::string type1, type2;
        if(!search_variables((char*)result_left.c_str()))
        {
            char* type = verify_operand((char*)result_left.c_str());
            type1 = type;
            if(type==NULL || !(strcmp(type, "int")!=0 || strcmp(type, "float")!=0 || strcmp(type, "bool")!=0))
            {
                still_ok = false;
                return "undefined";
            }
            char* value_aux = return_value((char*)result_left.c_str());
            if(value_aux==NULL || strcmp(value_aux, "(null)")==0 || strcmp(value_aux, "undefined")==0 || strcmp(value_aux, "return_unknown")==0)
            {
                still_ok = false;
                return "undefined";
            }
            value1 = value_aux;
        }
        else{
            value1 = result_left;
            if(is_float(value1)){
                type1 = "float";
            }
            else if(value1[0]=='t' || value1[0]=='f'){
                type1 = "bool";
            }
            else{
                type1 = "int";
            }
        }
        if(!search_variables((char*)result_right.c_str()))
        {
            char* type = verify_operand((char*)result_right.c_str());
            type2 = type;
            if(type==NULL || !(strcmp(type, "int")!=0 || strcmp(type, "float")!=0 || strcmp(type, "bool")!=0))
            {
                still_ok = false;
                return "undefined";
            }
            char* value_aux = return_value((char*)result_right.c_str());
            if(value_aux==NULL || strcmp(value_aux, "(null)")==0 || strcmp(value_aux, "undefined")==0 || strcmp(value_aux, "return_unknown")==0)
            {
                still_ok = false;
                return "undefined";
            }
            value2 = value_aux;
        }
        else{
            value2 = result_right;
            if(is_float(value2)){
                type2 = "float";
            }
            else if(value2[0]=='t' || value2[0]=='f'){
                type2 = "bool";
            }
            else{
                type2 = "int";
            }
        }

        if((root->value[0]=='+' || root->value[0]=='-' || root->value[0]=='*' || root->value[0]=='/') && (type1=="bool" || type2=="bool" || type1!=type2))
        {
            still_ok = false;
            return "undefined";
        }
        if((root->value[0]=='=' || root->value[0]=='!' || root->value[0]=='<' || root->value[0]=='>') && type1!=type2)
        {
            still_ok = false;
            return "undefined";
        }
        if((root->value[0]=='|' || root->value[0]=='&') && (type1!="bool" || type2!="bool"))
        {
            still_ok = false;
            return "undefined";
        }

        if(is_float(value1)){
            float f1=std::stof(value1);
            float f2=std::stof(value2);
            float r = 0;
            if(root->value[0]=='+'){
                r = f1+f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='-'){
                r = f1-f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='*'){
                r = f1*f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='/'){
                r = f1/f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='!'){
                if(f1!=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='='){
                if(f1==f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='<' && root->value[0]=='='){
                if(f1<=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='<'){
                if(f1<f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='>' && root->value[0]=='='){
                if(f1>=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='>'){
                if(f1>f2)
                    result = "true";
                else
                    result = "false";
            }
        }
        else if(value1[0]=='t' || value1[0]=='f'){
            bool f1, f2;
            if(value1[0]=='t')
                f1=true;
            else f1=false;
            if(value2[0]=='t')
                f2=true;
            else f2=false;

            if(root->value[0]=='!'){
                if(f1!=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='='){
                if(f1==f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='<' && root->value[0]=='='){
                if(f1<=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='<'){
                if(f1<f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='>' && root->value[0]=='='){
                if(f1>=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='>'){
                if(f1>f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='&'){
                if(f1 && f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='|'){
                if(f1 || f2)
                    result = "true";
                else
                    result = "false";
            }
        }
        else{
            int f1=std::stoi(value1);
            int f2=std::stoi(value2);
            int r = 0;
            if(root->value[0]=='+'){
                r = f1+f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='-'){
                r = f1-f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='*'){
                r = f1*f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='/'){
                r = f1/f2;
                result = std::to_string(r);
            }
            else if(root->value[0]=='!'){
                if(f1!=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='='){
                if(f1==f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='<' && root->value[0]=='='){
                if(f1<=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='<'){
                if(f1<f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='>' && root->value[0]=='='){
                if(f1>=f2)
                    result = "true";
                else
                    result = "false";
            }
            else if(root->value[0]=='>'){
                if(f1>f2)
                    result = "true";
                else
                    result = "false";
            }
        }

        return result;
    }
}

void afisare(Node* root)
{
    printf("%s ", root->value.c_str());
    if(root->left!=nullptr){
        afisare(root->left);
    }
    else{
        printf("null ");
    }
    if(root->right!=nullptr){
        afisare(root->right);
    }
    else{
        printf("null ");
    }
}

const char* TypeOf(std::string response){
    std::string result;
    if(response == "undefinde"){
        result = "undefined";
    }
    else if(response[0] == 't' || response[0] == 'f'){
        result = "bool";
    }
    else if(is_float(response)){
        result = "float";
    }
    else{
        result = "int";
    }
    return result.c_str();
}