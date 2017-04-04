#include<stdio.h>
#include<conio.h>
void main()
{
int a[100];
int i=0,search;
int size;
clrscr();
printf("\n Enter the size of array:");
scanf("%d",&size);
printf("\n Enter Array elements:");
for(i=0;i<=size;i++)
{
scanf("%d",&a[i]);
 }
 printf("\n Enter the element which have to find:");
 scanf("%d",&search);
 while(i<size && search!=a[i])
 {
 i++;
 }
 if(i<size)
 {
 printf("\n Element found at location=%d",i+1);
 }
 else
 {
 printf("\n Element not found");
 }
 getch();
 }
