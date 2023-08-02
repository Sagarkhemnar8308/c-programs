#include<stdio.h>
int main(){

int a=10;
int* b=&a;
int** c=&b;

printf("%d\n",a);//10
printf("%u\n",&a);//address of a
printf("%u\n",b);//address of a
printf("%u\n",&b);//address of b
printf("%d\n",*b);//10
printf("%d\n",c);//address of b
printf("%u\n",&c);//address of c
printf("%d\n",*c);//address of a;



}