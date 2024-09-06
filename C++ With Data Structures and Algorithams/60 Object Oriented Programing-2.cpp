#include<iostream>
#include <cstring>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char *name;
    char level;

    Hero(){
        cout << " Simple consttructor called " << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health){  
        cout << "this ->" << this << endl;     
        health = health;
    }

    Hero(int health, char level){
        this -> level = level;       
        this -> health = health;
    }

    //copy Constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this -> health = temp.health;
        this-> level = temp.level;
    }

    void print (){
        cout << endl;
        cout << "[ Name : " << this -> name << " ,";
        cout << " health : " << this -> health << " ,";
        cout << " level : " << this -> level << " ]";
        cout << endl << endl;
    }

    int getHealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){        
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    ~Hero(){
        cout << " Destructor bhai called " << endl;
    }
};

int Hero::timeToComplete = 5;

int main (){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;    

    // //Static
    // Hero a;

    // //Dyanamic
    // Hero *b = new Hero();



    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setlevel('D');
    // char name[7] = "Chetan";
    // hero1.setName(name);

    // hero1.print();

    // //use default copy constructor

    // Hero hero2(hero1);
    
    // //Hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;
    // hero1.print();
    // hero2.print ();
    
/*
    Hero chetan;
    cout << " Assress of chetan" << &chetan << endl;
    chetan.print();

    Hero *h = new Hero();
    h->print ();

    Hero temp(22, 'B');
    temp.print();






    //static allocation
    Hero a;
    a.setlevel('B');
    a.getHealth(80);
    cout << "level is" << a.level << endl;
    cout << " chetan is " << a.getHealth() << endl;

    //dynamically
    Hero *b = new Hero;
    b->setlevel('A');
    b->getHealth(70);
    cout << " level is " << (*b).level << endl;
    cout << " chetan is " << (*b).getHealth() << endl;

    cout << " level is " << b->level << endl;
    cout << " chetan is " << b->getHealth() << endl;

*/
    
    return 0;
}