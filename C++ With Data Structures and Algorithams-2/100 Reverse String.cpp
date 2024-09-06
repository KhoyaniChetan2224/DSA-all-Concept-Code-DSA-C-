#include<iostream>
using namespace std;

void revese (string& str, int i, int j){

    cout << " call revieved fro " << str << endl;

    //basc case
    if (i > j)
        return ;

    swap(str [i], str [j]);
    i++;
    j--; 

    //Recursive call
    revese(str, i, j);
}

int main (){

    string name = "Khoyani Chetan";
    cout << endl;
    revese(name, 0, name.length()-1 );
    cout << endl;
    cout << name << endl;

    return 0;
}