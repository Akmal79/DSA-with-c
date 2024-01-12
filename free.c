//free() is used to relase the dynamically allocated memory in heap

//syntax: void free(ptr)

//the memory allocated in the heap will not be released automatically after using the memory the space remains there and cant be used
// it is the programmers responsibility to release the memory after use
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int *ptr = (int*)malloc(2*sizeof(int));

    if(ptr==NULL){
        printf("memory not available");
        exit(1);
    }
    printf("Enter the two numbers: \n");
    for(i=0; i<2; i++){
        scanf("%d",ptr+i);
    }

    ptr = (int*)realloc(ptr,4*sizeof(int));
    if(ptr==NULL){
        printf("memory not available");
        exit(1);
    }
    printf("Enter two more integers: \n");
    for(i=2;i<4;i++)
        scanf("%d", ptr+i);
    
    
    for(i=0;i<4;i++)
        printf("%d ", *(ptr+i));
        return 0;
    
    free(ptr);
    ptr=NULL;
    
}