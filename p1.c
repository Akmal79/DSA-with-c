#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

// struct node* createnode(int data){
//     struct node* newnode= (struct node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next = NULL;
//     return newnode;
// }
struct node* createnode(int value){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        printf("memory allocation failed");
    }
    
    newnode->data=value; //assigning newnode data value
    newnode->next = NULL; //assigning next data value
    return newnode;
}
void printList(struct node* head){
    while (head!=NULL)
    {
        printf("%d->", head->data); //prints a variable that is the data value head is pointing to
        head= head->next;
    }
    printf("\n");
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

struct node* reverselist(struct node* head){
    struct node* prev=NULL, *current =head, *nextnode=NULL;
    while (current!=NULL)
    {
        nextnode = current ->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head=prev;
    return head;
}
int main(){
    struct node* head =NULL;
    int value, n;
    printf("Enter the no of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i <n; ++i)
    {
        printf("Enter the value of %d node: ",i+1);
        scanf("%d", &value);
        insertAtEnd(&head,value);
    }
    printf("linked list: ");
    printList(head);
    int reverse;

    return 0;
}