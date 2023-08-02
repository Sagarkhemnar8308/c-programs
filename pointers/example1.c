#include<stdio.h>
int main(){
int x = 10 , y ;
int *ptr; ptr = &x;
printf ("Address of x is %u \n" , &x);
printf ("Value of x is %d \n" , x);
printf ("Address of ptr is %u \n" , ptr);
printf ("Content of ptr is %d" , *ptr);
}