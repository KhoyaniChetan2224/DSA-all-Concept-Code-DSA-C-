#include<iostream>
#include<stack>
using namespace std;

class stack{
    properties

    
}

int main (){

    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop ();

    cout << " Printing top Elemet " << s.top () << endl; 

    if (s.empty ()){

        cout << " Stack is empty " << endl;
    }else{
        cout << " Stack is not empty " << endl;
    }

    cout << " size of stack is " << s.size () << endl;



    return 0;
}