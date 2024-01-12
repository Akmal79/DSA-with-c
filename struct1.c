//passing structure variable as argument

#include <stdio.h>
struct point
{
    int x;
    int y;
};

void print(struct point p){
    printf("%d %d \n", p.x, p.y);
}
int main(){
    struct point p1={42,33};
    struct point p2= {22,44};
    print(p1);
    print(p2);
}