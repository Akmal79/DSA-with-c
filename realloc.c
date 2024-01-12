//realloc() is a built-in used to cahnge the size of memory block without losing the old data

//syntax: void *realloc(void*ptr,size_t newsize)
//First argument here: 'void*ptr' points to the previously allocated memory
//second argument  is declaring the newsize
//on failure realloc returns NULL

//Example: void *ptr = (int*)malloc(sizeof(int))
//ptr = realloc(ptr, 2*sizeof(int))

//this function moves the contents of the old block to a new block and the data of the old block is not lost
//we may lose data when the new size is smaller than the old size
//newly allocated bytes are uniniatialized

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
    
}