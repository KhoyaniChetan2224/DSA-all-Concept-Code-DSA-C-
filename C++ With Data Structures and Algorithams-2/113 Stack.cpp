#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

    // function -> behaviour
    Stack (int size){
        this -> size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }
    
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size)
            return arr[top];
            else
            {
                cout << "Stack is Empty" << endl;
                return -1;
            }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main (){
/*
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "Printing top element" << s.top() << endl;
    if (s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    cout << " Size of Stack is " << s.size() << endl;
*/

    //stack implemention (Array, Linked List)
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty mere dost" << endl;
    }
    else{
        cout << "Stack is Not empty mere dost" << endl;    
    }


    return 0;
}
