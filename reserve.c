#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to reverse a singly linked list
struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL, *current = head, *nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next;  // Save the next node
        current->next = prev;      // Reverse the link
        prev = current;            // Move prev to the current node
        current = nextNode;        // Move current to the next node
    }

    head = prev;  // Set the head of the reversed list

    return head;
}

// Main function to test the program
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original Linked List: ");
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    printf("Reversed Linked List: ");
    printList(head);

    // Free the allocated memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
