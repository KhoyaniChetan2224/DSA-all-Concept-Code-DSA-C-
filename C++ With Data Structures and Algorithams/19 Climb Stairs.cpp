#include<iostream>
using namespace std;

int getSum (int *arr, int size){

    //bace case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr [0];
    }
    int remainingPar = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPar;
    return sum;
}

int main (){

    int arr [5] = {2, 4, 3, 6, 9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << " Sum is " << sum << endl;

    return 0;
}