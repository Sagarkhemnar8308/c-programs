#include<stdio.h>
int main(){

int a=12;
int *b;
b=&a;

printf("%d\n",a);
printf("%u\n",b);
printf("%d\n",*b);
printf("%u\n",&a);

}