#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,third;
clrscr();
printf("\n Enter two angles of triangle:");
scanf("%d%d",&a,&b);
third=180-(a+b);
printf("\n Third Angle of Triangle Is=%d",third);
getch();
}