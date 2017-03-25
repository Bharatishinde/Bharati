#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y;
int result;
clrscr();
printf("\n Enter Base No:");
scanf("%d",&x);
printf("\n Enter Exposent of a No:");
scanf("%d",&y);
result=pow(x,y);
printf("\n Result=%d",result);
getch();
}