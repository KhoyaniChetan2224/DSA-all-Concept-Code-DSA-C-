#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];
    int cnt = 0;

    for ( int i=s+1; i<=e; i++){
        if (arr[i] <= pivot){
            cnt++;
        }
}
    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part
    int i = s, j = e;

    while ( i < pivotIndex && j > pivotIndex ){
        while (arr[i] < pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if ( i < pivotIndex && j > pivotIndex ){
        swap(arr[i++], arr[j--]);
        }
    }   
    return pivotIndex;
}

void Subset(int arr[], int s, int e){

    //base case 
    if (s >= e)
        return;

    //partitioon karana
    int p = partition(arr, s, e);

    //left part karana 
    Subset(arr, s, p-1);

    //right wala part karo 
    Subset(arr, p+1, e);
}

int main (){

    int arr[3] = {1, 2, 3};
    int n = 3;

    Subset(arr, 0, n-1);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}