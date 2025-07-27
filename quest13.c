#include <stdio.h>
#include <stdlib.h>

// Кодовое слово DOUBLE-w, находится за автоматом в игровой
// JJ
// ROT-13
// WW

typedef struct Node {
    char data;
    struct Node *next;
} node;

node *createNode(char data) {
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

node *createList() {
    node *head = NULL;
    node *current = NULL;

    for (char c = 'A'; c <= 'Z'; c++) {
        node *newNode = createNode(c);
        if (head == NULL) {
            head = newNode;
            current = head;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }
    return head;
}

node *goToNode(node *head, int n) {
    node *current = head;
    for (int i = 1; i < n && current != NULL; i++) {
        current = current->next;
    }
    return current;
}

void freeList(node *head) {
    node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    node *head = createList();
    node *tenthNode = goToNode(head, 10);

    printf("%c%c\n", tenthNode->data, tenthNode->data);
    freeList(head);
}