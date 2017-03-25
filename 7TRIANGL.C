#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int bre,heig;
int area;
clrscr();
printf("\n Enter Breadth and Height of triangle");
scanf("%d%d",&bre,&heig);
area=bre*heig/2;
printf("\n Area Of Triangle is:%d",area);
getch();
}