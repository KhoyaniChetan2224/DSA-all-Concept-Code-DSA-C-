//how to create a 2D array dynamically
//input / output
//memory free kaise karani hai
#include<iostream>
using namespace std;

int main (){

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creation done
    int **arr = new int *[row];
    for ( int i=0; i<row; i++){
        arr[i] = new int [col];
    }

    //taking input
    for ( int i=0; i<row; i++){
        for ( int j=0; j<col; j++){
            cin >> arr [i][j];
        }
    }

    //taking output
    for ( int i=0; i<col; i++){
        for ( int j=0; j<col; j++){
            cout << arr [i][j] << " ";
        }
        cout << endl;
    }

    //releasing meory
    for ( int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}