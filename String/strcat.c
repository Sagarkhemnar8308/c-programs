#include<stdio.h>
int main(){
    char name[20]="sagar";
    char named[22]=" khemnar";

    strcat(name,named);

    printf("%s",name);
}