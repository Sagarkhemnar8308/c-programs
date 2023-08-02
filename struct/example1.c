#include <stdio.h>
#include <string.h>
struct Person
{
    int age;
    char name[20];
    float salary;
};
int main()
{
    struct Person c1;
    c1.age = 20;
    c1.name;
    c1.salary = 235.90;
    strcpy(c1.name, "sagar khemnar");
    printf("your name is %s\n", c1.name);
    printf("your age is %d\n", c1.age);
    printf("Salary is %f\n", c1.salary);
}