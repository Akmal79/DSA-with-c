#include <stdio.h>

int main(){
    int n = 20;
    void *ptr = &n; //void pointer is a pointer which has no associated data type with it, it can be typecasted to any data type
    printf("%d", *(int*)ptr); //*(int*)ptr here the void pointer is typecasted using the *(int*) then dereferenced 
    return 0;
}
//Note:you can not derefrence a void pointer without typecasting it

//use of void pointer
//malloc and calloc function return a void pointer due to which they can allocate memory for any type of data
//abstraction of data