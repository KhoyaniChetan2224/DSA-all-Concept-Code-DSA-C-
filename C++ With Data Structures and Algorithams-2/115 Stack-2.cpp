#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i=00, i<expression.length(); i++){
        char ch = expression[i];

        //if opning bracket
        if((ch == '(' || ch == '{' || ch == '[')){
            s.push(ch);
        }
        else{
            //for closing bracket
            if(!s.empty()){
                char top = s.top();
                if( {ch == ')' && top == '('}|| 
                    {ch == '}' && top == '{'} ||
                    {ch == ']' && top == '['} ){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main (){

    isValidParenthesis()


    return 0;
}