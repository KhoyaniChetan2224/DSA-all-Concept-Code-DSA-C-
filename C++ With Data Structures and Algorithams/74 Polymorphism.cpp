// Two Type :=> Compile Time Polymorphosm
//          :=> Run Time Polymorphosm
#include<iostream>
using namespace std;

class A{

    public:
        void sayHello(){
            cout << " Hello Khoyani Chetan " << endl;
        }

        void sayHello(char name){
            cout << " Hello Khoyani Chetan " << endl;
            // return 1;
        } 

        void sayHello(string name){
            cout << " Hello " << name << endl;
        }    
};

int main (){

    A obj;
    obj.sayHello();



    return 0;
}