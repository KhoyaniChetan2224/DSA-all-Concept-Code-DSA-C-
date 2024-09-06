//Output:-1,2,2,3,5,6
#include<iostream>
#include<vector>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){


    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m ){
        if (arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while (i<n){
        arr3[k++] = arr1[i++];
    }
    while (j<m){
        arr2[k++] = arr2[j++];
    }
}

void print (int ans[], int n){
    for (int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main (){
    
    int arr1[6] = { 1, 2, 3, 0, 0, 0};
    int arr2[3] = { 2, 5, 6};

    int arr3[9] = {0};

    merge (arr1, 6, arr2, 3, arr3);

    print (arr3, 9);

    return 0;
}