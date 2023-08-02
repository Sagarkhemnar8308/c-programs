#include<stdio.h>
#include<String.h>
struct Pc
{
    char name[20];
    int ram;
    int rom;
};
int main(){
  struct Pc p1;

  p1.name;
  strcpy(p1.name,"Computer");

  p1.ram=23;
  p1.rom=56;

  printf("%s\n",p1.name);
  printf("%d\n",p1.ram);
  printf("%d\n",p1.rom);

}
