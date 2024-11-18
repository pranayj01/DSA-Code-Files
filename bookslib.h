#include<stdio.h>
#include<string.h>
struct book{
int booknum;
int pgnum;
char bname[20];
char *bauthor;
char *location;
};
struct book b[2];

void DisplayDetails(int num){
printf("book number:%d\n",b[num-1].booknum);
printf("pages:%d\n",b[num-1].pgnum);
printf("book name:%s\n",b[num-1].bname);
printf("Author Name:%s\n",b[num-1].bauthor);
printf("Location of the book is:%s\n",b[num-1].location);

}
void AddDetails(int num){
printf("\nEnter Book Number:");
scanf("%d",&b[num-1].booknum);
printf("Enter number of pages:");
scanf("%d",&b[num-1].pgnum);
printf("Enter name of the book:");
scanf("%s\n",b[num-1].bname);
printf("Enter name of the author:");
scanf("%s\n",b[num-1].bauthor);
printf("Enter location of the book:");
scanf("%s\n",b[num-1].location);
}

int main(){
b[0].booknum=1;
b[0].pgnum=100;
strcpy(b[0].bname,"let us c");
//b[0].bname="let us c";
b[0].bauthor="david kushner";
b[0].location="book shelf 1 rack 1";

b[1].booknum=2;
b[1].pgnum=69;
strcpy(b[1].bname,"atomic habits");
//b[1].bname="atomic habbits";
b[1].bauthor="taylow swift";
b[1].location="book shelf 2 rack 2";

DisplayDetails(1);
AddDetails(3);
DisplayDetails(3);
}

