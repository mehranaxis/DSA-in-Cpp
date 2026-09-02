#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head ,int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
}
    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }
    Node* insertToPosition = new Node(data);
    insertToPosition -> next = temp -> next;
    temp -> next = insertToPosition;

}
void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
    
}
int main(){
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 1);
    print(head);
    insertAtTail(tail, 3);
    print(head);
    insertAtTail(tail, 4);
    insertAtTail(tail,6);
    print(head);
    insertAtPosition(head,4, 5);
    print(head);
}