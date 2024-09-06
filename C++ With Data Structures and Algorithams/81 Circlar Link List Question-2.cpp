#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    //constrcutor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
        }
        cout << "Memory free for node with data" << value << endl;
    }
};

void  insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //assuming that the element is preset in the list
        //non empty list
        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr ->  next;
        curr -> next = temp;
    }
}

void print (Node* tail){

    Node* temp = tail;

    //empty list
    if(tail == NULL){
        cout << " List is empty "<< endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout << " List is empty , please check again " << endl;
        return;
    }
    else{
        //non-empty

        //assuming that the element is preset in the list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
           prev = curr;
           curr = curr -> next;
        }
        prev -> next = curr -> next;

        //1 node linked list
        if (curr == prev){
            tail = NULL;
        }

        //>=2 Node Linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool detectLoop(Node* head){
    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while (temp != NULL){

        //cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

Node* getStartingNode(Node* head){
    if(head == NULL)
        return NULL;

    Node* intersection = getStartingNode(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL)
    return;

    Node* startOfLoop = getStartingNode(head);

    Node* temp = startOfLoop;
    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
        temp-> next = NULL;
}

int main (){

    Node* tail = NULL;

    //empty list me insert
    insertNode(tail, 5, 3);
    print (tail);

    insertNode(tail, 3, 5);
    print (tail);

    insertNode(tail, 5, 7);
    print (tail);

    insertNode(tail, 7, 9);
    print (tail);

    insertNode(tail, 5, 6);
    print (tail);

    insertNode(tail, 9, 10);
    print (tail);

    insertNode(tail, 3, 4);
    print (tail);

    deleteNode(tail, 3);
    print(tail);

    


    return 0;
}