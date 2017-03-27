#include<stdio.h>
#include<conio.h>
void main()
{
int a[50];
int i,j,temp;
clrscr();
printf("\n Enter array Elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{
if(a[j]>a[j+1])
{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
}
}
printf("\n Array Elements in Accending Order are:\n");
for(i=0;i<10;i++)
{
printf("%d",a[i]);
}
getch();
}