#include <stdio.h>
#include<stdlib.h>
struct point
{
    int x;
    int y;
};

struct point *fun(int a,int b){ //as this is a function the memory allocated here gets deleted after use hence malloc is used here to retain the adress of the
    struct point *ptr = (struct point*)malloc(sizeof(struct point)); 
    ptr ->x=a;
    ptr ->y=b;
    return ptr;
}

void print(struct point *ptr){
    printf("%d %d \n", ptr->x, ptr->y);
}
int main(){
    struct point *ptr1, *ptr2;
    ptr1 = fun(2,3);
    ptr2 = fun(5,6);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);

    ptr1=NULL;
    ptr2=NULL;
    return 0;
}