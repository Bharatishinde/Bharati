#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],c[20];
int i,j,k;
clrscr();
printf("\n Enter element of first Array:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter Element of Second Array:");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
printf("\n Addition Of Array Is\n:");
for(i=0;i<5;i++)
{
c[i]=a[i]+b[i];
printf("%d\n",c[i]);
}
getch();
}
