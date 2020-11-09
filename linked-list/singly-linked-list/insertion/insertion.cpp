#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void print(Node* n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }

    cout << endl;
}

void push_at_head(Node** head, int new_data){
    Node* new_node = new Node();

    new_node -> data = new_data;
    new_node -> next = *head;

    *head = new_node;
}

void push_at_end(Node** head, int new_data){
    Node* new_node = new Node();
    
    Node *last = *head;
    new_node -> data = new_data;
    new_node -> next = NULL;

    if(*head == NULL){
        *head = new_node;
        return;
    }

    while(last -> next != NULL){
        last = last -> next;
    }

    last -> next = new_node;

    return;
}

int main(){
    Node* head = NULL;
    Node* mid = NULL;
    Node* tail = NULL;

    head = new Node();
    mid = new Node();
    tail = new Node();

    head -> data = 1;
    head -> next = mid;
    
    mid -> data = 2;
    mid -> next = tail;

    tail -> data = 3;
    tail -> next = NULL;

    print(head);
    push_at_head(&head, 12);
    push_at_end(&head, 23);
    push_at_end(&head, 25);
    print(head);

    return 0;
}
