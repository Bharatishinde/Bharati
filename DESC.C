#include<stdio.h>
#include<conio.h>
void main()
{
int a[6]={22,57,1,99,23,22};
int i,j,temp;
clrscr();
for(i=0;i<6;i++)
{
 for(j=i+1;j<6;j++)
 {
if(a[i]<a[j])

{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
 }
 }
printf("Dscending Order:\n");
for(i=0;i<6;i++)
{
printf("%d\t",a[i]);

}
 getch();
 }


