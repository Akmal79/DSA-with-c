#include<stdio.h>
#include<stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node from the end of the linked list
void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The linked list is empty. Deletion is not possible.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    // Traverse to the end of the linked list
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // If there is only one node in the list
    if (prev == NULL) {
        free(*head);
        *head = NULL;
    } else {
        prev->next = NULL;
        free(temp);
    }

    printf("Node deleted from the end of the linked list.\n");
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int value, n;

    // Take user input for the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Take user input for each node's value
    for (int i = 0; i < n; ++i) {
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &value);
        insertAtEnd(&head, value);
    }

    // Display the initial linked list
    printf("Initial linked list: ");
    displayList(head);

    // Perform deletion from the end
    deleteFromEnd(&head);

    // Display the updated linked list
    printf("Linked list after deletion: ");
    displayList(head);

    return 0;
}
