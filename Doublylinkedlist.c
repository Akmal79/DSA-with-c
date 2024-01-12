#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

void insertatend(struct node** head, int data ){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    if (*head==NULL){
        newnode->prev= NULL;
        *head=newnode;
        return;
    }

    struct node* current = *head;
    while (current->next!=NULL)
    {
        current=current->next;
    }
    current->next = newnode;
    newnode->prev = current;
    
}

void display(struct node* head){
    while (head!=NULL){
        printf("%d<->",head->data);
        head= head->next;
    }
    printf("NULL \n");
    
}


int main(){
    struct node* head= NULL;
    insertatend(&head,9);
    insertatend(&head,4);

    printf("Orignal doubly linked list: ");
    display(head);
}







