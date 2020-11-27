#include<iostream>

class Node{
    public:
        int data;
        Node* next;
};

void insertAtBeginning(Node** head, int d){
    Node* newNode = new Node();
    newNode -> data = d;
    newNode -> next = *head;
    *head = newNode;
}

void insertAfter(Node* prev, int d){
    if(prev == NULL){
        std::cout << "The given previous cannot be NULL" << std::endl;
        return;
    }

    Node* newNode = new Node();
    newNode -> data = d;
    newNode -> next = prev -> next;
    prev -> next = newNode;
}

void insertAtEnd(Node** head, int d){
    Node* newNode = new Node();
    Node* last = *head;
    newNode -> data = d;
    newNode -> next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    while(last -> next != NULL){
        last = last -> next;
    }
    last -> next = newNode;
    return;
}

void printMiddle(Node* head){
    Node* slowPointer = head;
    Node* fastPointer = head;
    if(head != NULL){
        while(fastPointer != NULL && fastPointer -> next != NULL){
            fastPointer = fastPointer -> next -> next;
            slowPointer = slowPointer -> next;
        }
        std::cout << "The Middle of the linked list is : " << slowPointer -> data << std::endl;
    }
}

void printSpecificPointer(Node* node, int n){
    int len = 0;
    while(node != NULL){
        node = node -> next;
    }
}

void printList(Node* node){
    while(node != NULL){
        std::cout << node -> data << " ";
        node = node -> next;
    }
    std::cout << std::endl;
}

int main(){
    Node* head = NULL;
    insertAtBeginning(&head, 5);
    insertAfter(head, 7);
    insertAtEnd(&head, 9);
    insertAtBeginning(&head, 15);
    insertAfter(head, 27);
    insertAtEnd(&head, 39);
    insertAtBeginning(&head, 52);
    insertAfter(head, 72);
    insertAtEnd(&head, 94);
    printList(head);

    printMiddle(head);
    printSpecificPointer(head, 5);

    return 0;
}
