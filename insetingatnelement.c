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

// Function to insert a node at the nth position in the doubly linked list
void insertAtN(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;

    if (position == 1) {
        // Insert at the beginning
        newNode->next = *head;
        if (*head != NULL)
            (*head)->prev = newNode;
        *head = newNode;
        return;
    }

    // Traverse to the (position-1)-th node
    for (int i = 1; i < position - 1 && temp != NULL; ++i)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    // Insert at the nth position
    newNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newNode;
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

int main() {
    struct Node* head = NULL;

    // Inserting elements at the beginning
    insertAtN(&head, 3, 1);
    insertAtN(&head, 2, 1);
    insertAtN(&head, 1, 1);

    // Inserting elements at the nth position
    insertAtN(&head, 4, 2);
    insertAtN(&head, 5, 4);

    // Traversing in the forward direction
    traverseForward(head);

    return 0;
}
