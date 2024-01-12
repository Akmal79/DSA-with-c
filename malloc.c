//malloc is a built in function defined in the header file <stdlib.h>
//malloc is the short name for memory allocation 
//and is used to dynamically allocate a single larde block of contiguous memory according to the size specified in heap
//on sucess it retuens a void ponter pointing to the addrress of first byte of the allocated memory else NULL
//malloc doen not have an idea of what it is pointing to

//int *ptr = (int*)malloc(4) here malloc allocates 4 bytes of memory which allocates 4 bytes of memory in heap on success which is then typcasted to int using(int*)
//and then stores that adress of the first byte into a pointer ptr
#include <stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the number of integers: ");
    scanf("%d", &n); //here scanf requires an ambesnet(&) because n represents the value and requires the address of n to store the value
    int *ptr = (int*)malloc(n*sizeof(int)); //we want malloc to allocate the memory equivelent to the size of n integer to ptr

    if (ptr==NULL){
        printf("Memory is not allocated");
        exit(1);
        }
    for(i=0;i<n;i++){  //for loop runs from 0 to n-1
        printf("enter a integer: ");
        scanf("%d", ptr+i); //ptr contains the address of the first byte of memory, if ptr=1000 and i=0 then the location is 1000 and if i=1 the location is 1004 and if i=2 location is 1008 and so on 
    }//no '&' was used in ptr as it is pointing to the adress and that address is required not the value of ptr(Value of ptr is obtained by derefrencing ptr using *(ptr))
    for (i = 0; i <n; i++)
        printf("%d ", *(ptr+i));
        return 0;
    
    
}

//dynamic memory allocation is caried out in 'heap'
//heap is where memory is allocatedd or dealocated in a random manner
//in stack memory is allocated or dealocated in a ordered/defined manner

//syntax" (void*)malloc(size_t size)

// size_t is defined in <stdlib.h> as unsigned integer