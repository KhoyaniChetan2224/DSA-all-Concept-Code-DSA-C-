#include<iostream>
using namespace std;

// 1-> Prime no.
//0-> Not a Primr no.
bool isPrime(int n){

    for (int i=2; i<n; i++){

        if (n%i == 0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int  n;
    cin >> n;

    if(isPrime(n)){
        cout << " is a Prime no. " << endl;
    }else{
    
        cout << " is a not Prime no." << endl;
    }
    return 0;

}