#include<stdio.h>
#include <string.h>
struct app
{
      char appName[20];
      char update[30];
      int year;
}a1;

int main(){
a1.appName;
strcpy(a1.appName,"Instagram");

a1.update;
strcpy(a1.update,"16 july");

a1.year=2022;

printf("%d\n",a1.year);
printf("%s\n",a1.update);
printf("%s\n",a1.appName);

}