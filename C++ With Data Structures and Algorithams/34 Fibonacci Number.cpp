//Fibonacci Number -> 0, 1, 1, 2, 3, 5, 8, 13, 21,...
#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    
    //base case
    if(n == 0)
    return;

    //processing
    int digit = n % 10;
    n = n / 10;    

    //rerecursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main (){

    string arr[10] = { "zero", "one", "two", "three", "frour", " five", "six", "seven", "eigst", "nine" };
    int n;
    cin >> n;
    
    sayDigit(n, arr);
    cout << endl;

    return 0;
}