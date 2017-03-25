#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int p,n,r;
float s;
clrscr();
printf("\n Enter Ammount:");
scanf("%d",&p);
printf("\n Enter Duration:");
scanf("%d",&n);
printf("\n Enter Rate of Intrest:");
scanf("%d",&r);
s=(p*n*r)/100;
printf("\n Simple Intrest:%f",s);
getch();
}
