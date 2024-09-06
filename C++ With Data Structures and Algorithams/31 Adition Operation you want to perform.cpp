#include<iostream>
using namespace std;

int getMin( int num[0], int n){

    int mini = INT16_MAX;
    for (int i=0; i<n; i++){
        mini = min (mini, num [i]);
        //if(num[i] < min){
          //  min = num[i];
       // }
    }
    //returning min value
    return mini;
}

int getMax( int num[00], int n){

    int maxi = INT16_MIN;
    for (int i=0; i<n; i++){
        maxi = max(maxi, num[i]);
        //if(num[i] > max){
          //  max = num[i];
        //}
    }
    //returning max value
    return maxi;
}
int main(){
    int size;
    cin >> size;

    int num[100];

    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    char op;
    cout << " Enter the valu Operation you want to perform " << endl;
    cin >> op;

   switch ( op ){

        case '+': cout <<( num[0] + num[00] ) << endl;
        break;
        default:  cout <<(num[0] + num[00]) << endl;

    }
    return 0;
}