#include<stdio.h>
#include<conio.h>
void main()
{
char string[50];
int i,len;
int flag=0;
clrscr();
printf("\n Enter a string:");
scanf("%s",string);
len=strlen(string);
for(i=0;i<len;i++)
{
	if(string[i]!=string[len-i-1])
	{
	flag=1;
	break;
	}
}
if(flag)
{
printf("%s is not a palindrom",string);
}
else
{
printf("%s is is a palindrom",string);
}
getch();
}
