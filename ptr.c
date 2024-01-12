#include<stdio.h>
int main(){
int x = 10;
int *ptr = &x;
printf("%p \n",ptr);
printf("%p \n",&x);
printf("%p \n",&ptr);
printf("%d \n",x);
printf("%d \n",*ptr);
}
