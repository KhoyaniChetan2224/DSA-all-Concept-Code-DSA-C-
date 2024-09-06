#include<iostream>
using namespace std;

// Hold
void printArray (int arr[], int size){

     cout << " printing the array " << endl;
    //ptrint the array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

     cout << " printing done " << endl;

}
int main(){

    int number [15];
    
    cout << " Valu at 14 index" << number [14] << endl;
    
    //cout << " Valu at 20 index" << number [20] << endl;

    //intialising an array
    int second[3]= { 5, 7, 11};

    //accesing an element
    cout << " Valu at 2 index" << second [2] << endl;
    
    int third[15] = {2, 7};
    
    int n = 15;
    //printArray(third, 15);
    int thirdSize = sizeof (third) /sizeof(int);
    cout  << "Size of third is " << thirdSize << endl;


    //initialising all locations whit 0
    int fourth[10] = {0};

    n = 10;
    //printArray(fourth, 10);
    
    //initialising all locations whit 0
    int fifth[10] = {1};
    
    n = 10;
    //printArray(fifth, 10);
    int fifthSize = sizeof (fifth) /sizeof(int);
    cout  << "Size of fifth is " << fifthSize << endl;

    char ch[5] = {'a','b','c','r','p'};

    cout << ch[3] << endl;

      cout << " printing the array " << endl;
    //ptrint the array
    for(int i=0; i<5; i++){
        cout << ch[i] << " ";
    }

     cout << " printing done " << endl;
    double firstDoublep[5];
    float firstFloat[6];
    bool firstfloat[9];

   
    cout << endl << " Evrything is Fine " << endl << endl;

    return 0;
}