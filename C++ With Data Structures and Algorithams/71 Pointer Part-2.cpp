#include<iostream>
using namespace std;

void update (int **p2){
    p2 = p2 + 1;
    *p2 = *p2 + 1;
    **p2 = **p2 + 1;
}

int main (){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;

    cout << endl << endl;
    cout << " befor " << i << endl;
    cout << " befor " << p << endl;
    cout << " befor " << p2 << endl;
    update(p2);
    cout << " after " << i << endl;
    cout << " after " << p << endl;
    cout << " after " << p2 << endl;
    cout << endl << endl;    


    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first << " " << second  << endl;



    // int first = 7;
    // int *p  = &first;
    // cout << (*p)++ << " ";
    // //int *q = p;
    // //(*q)++;
    // cout << first << endl;


    // int *p = 0;
    // int first = 100;
    // p = &first;
    // cout << *p << endl;

    // int first = 4;
    // int second = 10;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;


    // int arr[6] = {11, 12, 13, 14, 15, 16};
    // cout << arr << " " << endl << &arr << endl;


    // int arr[6] = { 11, 12, 31};
    // int *p = arr;
    // cout << p[2] << endl;


    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 4) ;


    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl;


    // char arr[] = "Chetan" ;
    // char *p = &arr[0];
    // cout << p << endl;


    // char str[] = "Khoyani";
    // char *p = str;
    // cout << str[0] << " " << p[0] << endl;


    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;


    return 0;
}