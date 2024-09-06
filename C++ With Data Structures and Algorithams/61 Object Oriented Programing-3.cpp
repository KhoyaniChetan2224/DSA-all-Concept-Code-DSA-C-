#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout << " Simple consttructor called " << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health){       
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

    void setName(char name[]){
        strcpy (this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    ~Hero(){
        cout << " Destructor bhai called " << endl;
    }
};

int Hero::timeToComplete = 5; 

int main (){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

 /*
    Hero a;

    cout << a.timeToComplete << endl;

    Hero b;

    b.timeToComplete = 10;

    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;


    //Static
    Hero a;

    //Dyanamic
    Hero *b = new Hero();


    Hero hero1;
    hero1.setHealth(12);
    hero1.setlevel('D');
    char name[7] = "Chetan";
    hero1.setName(name);

    //use default copy constructor

    Hero hero2(hero1);
    
    //Hero hero2 = hero1;

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero1 = hero2;
    hero1.print();
    hero2.print ();



 
    //object created statically
    Hero chetan(10);
    cout << " Assress of chetan" << &chetan << endl;
    chetan.print();

    //dynamically
    Hero *h = new Hero(10);
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


//creation of object
    Hero chetan;
    cout << " size of chetan is " << sizeof(chetan) << endl;

    cout << " chetan  health is " << chetan.getHealth() << endl;
    //use setter
    chetan.setHealth(70);
    chetan.level = 'A';

    cout << " health is :" << chetan.getHealth() << endl;
    cout << " Level is :" << chetan.level << endl;

    //cout << "size :" << sizeof(chetan) << endl;
*/
    return 0;
}