#include<iostream>
using namespace std;

int binarySarch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start )/2;

    while(start <= end){
        
        if (arr[mid] == key){
            return mid;
        }

        //go to right wala part
        if (key > arr [mid]){

            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid =start + (end - start )/2;

    } 

    return -1;
}
int main (){

    int even[6] = { 2, 4, 6, 8, 12, 18};
    int odd[5] = { 3, 8, 11, 14, 16};    

    int evenIndex = binarySarch(even, 6, 20);

    cout << " Index of 20 is " << evenIndex << endl;

    int oddIndex = binarySarch(odd, 5, 20);

    cout << " Index of 20 is " << oddIndex << endl;



    return 0;
}