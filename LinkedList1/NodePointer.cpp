#include<iostream>
using namespace std;
class Node{ // Linked List Node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void revDisplay(Node* head){
    if(head==NULL) return; // base case
    revDisplay(head->next); // call
    cout<<head->val<<" "; // kaam
}
void displayrec(Node* head){
    if(head==NULL) return; // base case
    cout<<head->val<<" "; // kaam
    displayrec(head->next); // call
}
void insertAtEnd(Node* head, int val){
    Node* t = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    insertAtEnd(a,80);
    // cout<<a->next->next->next->val;
    // revDisplay(a);
    // displayrec(a);
    // cout<<size(a);
    return 0;
}