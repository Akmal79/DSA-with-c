//structure is user defined data type which can be used to group elements of different types into a single type
//example
// struct Student{
// char Name;
// int id;
// int age;
// int roll_no;
// float marks;
// };

// pasing stucture members as arguments!!!

#include<stdio.h>

struct Student
{
    char Name[50];
    int id;
    int age;
    float marks;
};
void print(char Name[], int id, int age, float marks){
    printf("%s %d %d %.2f",Name, id, age, marks);
}

int main(){
    struct Student s1= {"Nick",16,23,22.5};
    print(s1.Name, s1.id ,s1.age, s1.marks);
    
}