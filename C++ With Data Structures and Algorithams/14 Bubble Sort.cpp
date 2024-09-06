#include<iostream>
using namespace std;

void sortArray(int *arr, int n){

    //base case - alread sorted
    if (n == 0 || n == 0){
        return ;
    }

    //1 case sovle
    for(int i=0; i <n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //Recuesive call
    sortArray(arr, n-1);

}

int main (){

    int arr[5] = {2, 5, 1, 6, 9};
    
    sortArray (arr, 5);

    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }


    return 0;
}