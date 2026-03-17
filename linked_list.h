#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void append(Node** head, int data);
void printList(Node* head);
void deleteNode(Node** head, int value);

#endif