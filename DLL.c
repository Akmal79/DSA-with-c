#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to traverse the doubly linked list in the forward direction
void traverseForward(struct Node* head) {
    printf("Forward: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to traverse the doubly linked list in the backward direction
void traverseBackward(struct Node* tail) {
    printf("Backward: ");
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Inserting elements at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Inserting elements at the end
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    // Traversing in both directions
    traverseForward(head);

    // Finding the tail
    struct Node* tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    traverseBackward(tail);

    return 0;
}
