#include<stdio.h>
int main(){

int a=10;
int* p=&a;

printf("%d\n",a);
printf("%p\n",&a);
printf("%p\n",p);
printf("%p\n",&p);
printf("%d",*p);

}