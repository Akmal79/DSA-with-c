#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void insertAtEnd(struct node** head,int value){
    struct node* newnode= createnode(value);
    if(*head==NULL){
        *head = newnode;
    } else{
        struct node* temp = *head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode; 
    }
}
void displayList(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main(){
    struct node* head = NULL;
    int value;
    int n;
    printf("Enter the no of nodes: ");
    scanf("%d",&n);

    for(int i = 0;i < n; ++i){
        printf("Enter the value of %d node: ",i+1);
        scanf("%d", &value);
        insertAtEnd(&head,value);
    }
    printf("linked list: ");
    displayList(head);
    return 0;
}
