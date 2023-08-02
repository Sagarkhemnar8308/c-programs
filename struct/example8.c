#include<stdio.h>
#include<string.h>
struct Laptop{

char name[20];
int ram;
int rom;
};
int main()
{
   struct Laptop l1;

   l1.name;
   strcpy(l1.name,"sagar");
   l1.ram=12;
   l1.rom=24;

   printf("%s\n",l1.name);
   printf("%d\n",l1.ram);
   printf("%d",l1.rom); 
    return 0;
}
