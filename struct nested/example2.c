#include<stdio.h>
#include<string.h>
struct Computer{
char name[20];
int age;
long num;
};
struct Laptop{
char color[20];
int rate;
struct Computer p1;
}c1;
int main(){
c1.color;
strcpy(c1.color,"White");
c1.rate=18000;
c1.p1.age=3;
c1.p1.name;
strcpy(c1.p1.name,"Window 10");
c1.p1.num=834226;
printf("%s\n",c1.color);
printf("%d\n",c1.rate);
printf("%d\n",c1.p1.age);
printf("%d\n",c1.p1.num);
printf("%s\n",c1.p1.name);
}