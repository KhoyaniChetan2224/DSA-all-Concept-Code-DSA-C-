#include<iostream>
using namespace std;

int main (){

    int a, b;

    cout  << " Enter the valu of a " << endl;
    cin >> a;

    cout << " Enter the valu of b " << endl;
    cin >> b;

    char op;
    cout << " Enter the valu Operation you want to perform " << endl;
    cin >> op;

    switch ( op ){

        case '+': cout <<( a + b ) << endl;
        break;

        case '-': cout <<( a - b ) << endl;
        break;

        case '*': cout <<( a * b ) << endl;
        break;

        case '/': cout <<( a / b ) << endl;
        break;

        case '%': cout <<( a % b ) << endl;
        break;

        default: cout << " Please enter a valid Operation " << endl;

    }
    cout << endl;
    return 0;
}   