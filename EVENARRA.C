
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[50],c[50];
int i,j=0,k=0;
clrscr();
printf("\n Enter array Elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=10;i++)
{
if(a[i]%2==0)
	{
	b[j]=a[i];
	j++;
	}
else
	{
	 c[k]=a[i];
	 k++;
	 }
}
printf("Even Nos Array is:\n");
	 for(i=0;i<=j;i++)
	 {
	  printf("%d\n",b[i]);
	 }
printf("Odd Nos Array is:\n");
	 for(i=0;i<=k;i++)
	 {
	  printf("%d\n",c[i]);
	  }
getch();
}