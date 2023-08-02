#include<stdio.h>
#include<string.h>
int main(){

char a[]="sagar";
char b[]="saar";
int c;
c=strcmp(a,b);
if(c==1){
    printf("false");
}else{
    printf("true");
}
}