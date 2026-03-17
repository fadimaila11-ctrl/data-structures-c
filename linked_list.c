#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void printList(Node* head) {
    Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

void deleteNode(Node** head, int value) {
    Node* current = *head;
    Node* previous = NULL;

    // Wenn Liste leer
    if (current == NULL) return;

    // Wenn erstes Element gelöscht werden soll
    if (current->data == value) {
        *head = current->next;
        free(current);
        return;
    }

    // Durch Liste gehen
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    // Wenn nicht gefunden
    if (current == NULL) return;

    // Element entfernen
    previous->next = current->next;
    free(current);
}