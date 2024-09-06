#include<iostream>
using namespace std;

Node* kReverse(Node* head, int k){
    if (head == NULL){
        return NULL;
    }
    //Step1: revese first k node
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(crr != NULL && cout < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        cout++;
    }
    //Step2: rrecursion
    if(next != NULL){
    head -> next = kReverse(next, k);
    }
    //Step3: return head of reveser list
    return prev;
}

int main (){

    Node* head = NULL;
    Node* tail = NULL;

    kReverse(head, 3, 5);
    print(head); 

    return 0;
}