//Nul pointer is pointer that does not poit to any memory location, it represents individual memory location
//when Null value is assigned to a pointer then the pointer is considered Null pointer
//it is used to intialize a pointer when that pointer isn't assigned any valid memory address yet
//usefull for handling errors while using malloc()


#include <stdio.h>
 int main(){
    int *ptr=NULL;
    return 0;
 }


// int  main(){
//     int *ptr;
//     ptr = (int*)malloc(2(sizeof(int)));//malloc() is used to assign memmory dynamically
//     if (ptr ==NULL)
//         printf("memory could not be allocated")
//     else
//         printd("memory is allocated sucessfully")
//     return 0;
    
// }