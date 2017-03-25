#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int bre,heig;
int area;
clrscr();
printf("\n Enter Breadth and Height of rectangle");
scanf("%d%d",&bre,&heig);
area=bre*heig;
printf("\n Area Of Rectangle is:%d",area);
getch();
}