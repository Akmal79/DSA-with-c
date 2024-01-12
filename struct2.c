//passing pointer to structure as an argument
//if the size of structur is very large then passing the copy of the whole structure is not efficient 
//better choicre: pass the address of the structure
//you can use the arrow opperator(->) to acess the structure members inside the called function 

#include <stdio.h>
struct point
{
    int x;
    int y;
};

void print(struct point *ptr){
    printf("%d %d \n", ptr->x, ptr->y);
}
int main(){
    struct point p1={42,33};
    struct point p2= {22,44};
    print(&p1);
    print(&p2);
}