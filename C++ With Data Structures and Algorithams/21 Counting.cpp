#include<iostream>
using namespace std;

//Function Signature
void printCounting(int n){

    //Function Body
     for ( int i=1; i<=n; i++){

        
        cout << i << " ";
     }
     cout << endl;
}
int main (){
    
    int n;
    cin >> n;

    //function Call
    printCounting(n);

    return 0;

}