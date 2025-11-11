// ...existing code...
#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int roll;
    int age;
};
int main()
{
    struct Student s1;
    s1.age = 20;
    s1.roll = 101;
    strcpy(s1.name, "Mohd Samid");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Age: %d\n", s1.age);
    return 0;
};