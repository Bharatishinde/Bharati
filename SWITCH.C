#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter any no");
scanf("%d",&n);
switch(n%2==0)
{
case 1:
printf("Even No");
   break;
default :
printf("Odd No");
}
getch();
}
