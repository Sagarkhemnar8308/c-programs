#include<stdio.h>
int main(){

int a=10;
void* p=&a;

printf("%d\n",a);
printf("%d\n",&a);
printf("%d\n",*p);
printf("%d\n",&p);


}


 
