#include<iostream>

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head, int d){
    Node* newNode = new Node();
    newNode -> data = d;
    newNode -> next = *head;
    *head = newNode;
    return;
}

void printList(Node* node){
    while(node != NULL){
        std::cout << node -> data << " ";
        node = node -> next;
    }
    std::cout << std::endl;
}

void deletion(Node** head, int key){
    Node* temp = *head, *prev;

    if(temp != NULL && temp -> data == key){
        *head = temp -> next;
        free(temp);
        return;
    }
    while(temp != NULL && temp -> data != key){
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL)
        return;

    prev -> next =  temp -> next;

    free(temp);
}

int main(){
    Node* head = new Node();
    head -> data = 1;

    push(&head, 3);
    push(&head, 4);
    printList(head);
    deletion(&head, 3);
    printList(head);

    return 0;
}
