#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int a[10];
clrscr();
printf("\n Enter array Elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\nReverse Array Elements Are:\n");
for(i=9;i>=0;i--)
{
printf("%d\n",a[i]);
}
getch();
}