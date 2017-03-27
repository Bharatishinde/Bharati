#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string[100];
int len,i,j,temp;
clrscr();
printf("\n Enter a string:");
scanf("%s",&string);
len=strlen(string);
for(i=0;i<len;i++)
for(j=0;j<len-1;j++)
	if(string[j]>string[j+1])
	{
	temp=string[j];
	string[j]=string[j+1];
	string[j+1]=temp;
	}
printf("\n Sorted String is:");
printf("%s",string);
getch();
}
