#include<iostream>
using namespace std;

int factoria(int n){
    int fact = 1;

    for ( int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr (int n, int r){

    int num = factoria(n);

    int denom = factoria(r) * factoria(n-r);
  
    return num / denom;
}
int main (){
    int n, r;

    cin >> n >> r ;

    cout << "Answer is" << nCr(n, r) << endl;

    return 0;
}