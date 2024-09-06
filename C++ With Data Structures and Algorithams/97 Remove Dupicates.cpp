#include<iostream>
using namespace std;

Node* uniqueSortedList(Node * head){
    
    //empy list
    if(head == NULL)
        return NULL;

    //non empty lidst
    Node* curr = head;

    while(curr != NULL){
        if(curr -> data == curr -> next -> data)
    }
    else{
        curr = curr -> next;;..
    }
    return head;
}

int main(){

    
    Node* head = NULL;

    //empty list me insert
    uniqueSortedList(head, 1);
    print (head);

    uniqueSortedList(head, 2);
    print (head);

    uniqueSortedList(head, 3);
    print (head);

    uniqueSortedList(head, 4);
    print (head);

    uniqueSortedList(head, 5);
    print (head);

    uniqueSortedList(head, 6);
    print (head);

    uniqueSortedList(head, 7);
    print (head);



    return 0;
}