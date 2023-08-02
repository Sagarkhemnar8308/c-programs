#include<stdio.h>
#include <string.h>
struct Suraj
{
char name[23];
int age;

};
int main(){
    struct Suraj s1;
s1.name;
strcpy(s1.name,"suraj bombale");
s1.age=12;

printf("%s\n",s1.name);
printf("%d",s1.age);
}