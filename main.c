#include <stdio.h>
#include "linked_list.h"

int main() {
    Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    printf("Before delete:\n");
    printList(head);

    deleteNode(&head, 20);

    printf("After delete:\n");
    printList(head);


    return 0;
}