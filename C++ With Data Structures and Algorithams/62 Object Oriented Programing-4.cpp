#include<iostream>
using namespace std;

class Human {

    private:
        int height;
        int whight;
        int age;

        int getAge(){
            return this -> age;
        }
        void setWeight(int w){
            this -> whight= w;
        }
};

class Male: private Human{

    public:
        string color;

        void sleep(){
            cout << " Male Sleeping " << endl;
        }

        int getHeight(){
            return this->height;
        }
};

int main (){

    Male m1;
    //cout << m1.height << endl;



/*
    Male object1;
    cout << object1.age << endl;
    cout << object1.whight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;
    object1.setWeight(84);
    cout << object1.whight << endl;
    object1.sleep();
*/
    return 0;
}