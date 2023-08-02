#include<stdio.h>
#include<String.h>
struct book{

char nameOfNoteBook[20];
int page;
int rateOfBook;
int linesOnPages;

}b1;
int main(){
 b1.linesOnPages=30;
 b1.page=200; 
 b1.rateOfBook=40;
 b1.nameOfNoteBook;
 strcpy(b1.nameOfNoteBook,"Classmate");     
 printf("%d\n",b1.linesOnPages);
 printf("%d\n",b1.page);
 printf("%d\n",b1.rateOfBook);
 printf("%s\n",b1.nameOfNoteBook);
}

