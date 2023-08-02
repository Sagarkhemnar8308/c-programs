#include<stdio.h>
int main(){
int a=10;
int b=20;
int c=30;
int* p=&a;
int* q=&b;


printf("%d\n",a);  // => 10
printf("%p\n",&a); // =>address of a
printf("%d\n",b);  // =>20
printf("%p\n",&b); // =>address of b
printf("%d\n",c);  // =>30
printf("%p\n",&c); // =>adddress of c
printf("%p\n",p);  // =>address of a
printf("%d\n",*p); // =>10
printf("%p\n",&p); // =>address of p
printf("%p\n",q);  // =>address of b
printf("%d\n",*q); // =>20
printf("%p\n",&q); // =>address of q


}