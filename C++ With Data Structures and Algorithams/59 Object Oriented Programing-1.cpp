#include<iostream>
using namespace std;

class Student{

    private:
        string name;
        int height;
        int age;

    public:
        int getAge(){
            return this->age ;  
        }
};

int main (){

    Student first;
    
    cout << " Sab Shi Sala raha hes" << endl;

    return 0;
}