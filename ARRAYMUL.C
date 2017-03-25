#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],c[50];
int i,j ,k;
clrscr();
printf("\n Enter Element of first Array:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter Element of Second Array:");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
printf("\n Multiplication Of Two array is:");
for(i=0;i<5;i++)
{
c[i]=a[i]*b[i];
printf("\n%d",c[i]);
}
getch();
}
