#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

void add_at_end(struct Node** head, int data) {
    struct Node* ptr, * temp;
    ptr = *head;
    temp = (struct Node*)malloc(sizeof(struct Node));

    if (temp == NULL) {
        printf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    temp->data = data;
    temp->link = NULL;

    if (*head == NULL) {
        *head = temp;
    } else {
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

int main() {
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));

    if (head == NULL) {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    if (head!=NULL){
        printf("%d", "Enter tne lam");
    }

    head->data = 45;
    head->link = NULL;

    add_at_end(&head, 22);

    

    free(head); // Don't forget to free allocated memory before program termination
    return 0;
}
