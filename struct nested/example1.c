#include<stdio.h>
#include<string.h>
struct Person{
char name[20];
int age;
long num;
};
struct Car{
char color[20];
double rate;
struct Person p1;
}c1;
int main(){
c1.color;
strcpy(c1.color,"red");
c1.rate=42.030;
c1.p1.age=18;
c1.p1.name;
strcpy(c1.p1.name,"sagar khemnar");
c1.p1.num=83036246;
printf("%s\n",c1.color);
printf("%f\n",c1.rate);
printf("%d\n",c1.p1.age);
printf("%d\n",c1.p1.num);
printf("%s\n",c1.p1.name);
}