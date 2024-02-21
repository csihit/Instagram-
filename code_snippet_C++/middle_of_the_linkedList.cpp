#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
    this->next = NULL;
    }

    Node(int data){
    this->data = data;
    this->next = NULL;
    }
};

Node* middleNode(Node* &head) {

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
    } 
    return slow;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    cout<<"Middle Element of Linked List: "<<middleNode(head)->data;
}