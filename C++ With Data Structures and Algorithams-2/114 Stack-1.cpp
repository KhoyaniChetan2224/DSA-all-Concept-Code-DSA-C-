#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack, int count, int size){
    //base case
    if(count == size/2 ){
        inputStack.pop():
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    //recuresive call
    slove(inputStack, cout+1, size);

    inputStack.push(num);
}

void dletaMiddw(stack<int>&inputStack, int count, int size){

    int count = 0;
    solve(inputStack, cout, N);
}

int main (){



    





    return 0;
}