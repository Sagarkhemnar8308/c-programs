#include<stdio.h>
#include<String.h>
struct car{
   char name[20];
   int carNum;
   char color[20];
};
int main(){

   struct car c1;

   c1.carNum=1245;
   c1.color;
   strcpy(c1.color,"red");
   c1.name;
   strcpy(c1.name,"Baleno");
   printf("%s\n",c1.color);
   printf("%s\n",c1.name);
   printf("%d\n",c1.carNum);
}