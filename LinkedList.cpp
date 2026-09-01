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
void InsertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}
void InsertATail(Node* &tail, int data){

    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);

    node1 -> next = node2;
//     cout<< node1 -> data << endl;
//     cout<< node1 -> next << endl;
//     cout<< node2 -> data << endl;
//     cout<< node2 -> data << endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtHead(head, 11);
    print(head);
    InsertAtHead(head, 22);
    print(head);
    InsertATail(tail, 33);
    print(head);
    InsertATail(tail, 32);
    print(head);
    InsertATail(tail, 31);
    print(head);
}