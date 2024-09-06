#include<iostream>
using namespace std;

void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* cur = head;

    //create separate list 0 and 2
    while(curr != NULL){
        int valu = curr -> data;
        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1){
            popilate(oneTail, curr);
        }
        else if (value == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr -> next;
    }

    //merge in list
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }
    else{
        oneTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    //setup head
    head = zeroHead -> next;

    //delete dummy node
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main (){


    Node* tail = NULL;

    //empty list me insert
    sortList(head, 5, 3);
    print(head);

    return 0;
}