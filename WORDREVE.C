#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string1[]="Hello world";
char string2[100];
int i=0,j=0;
clrscr();
//printf("\n Enter a string:");
//gets(string1);
while(string1[i]!='\0')
{
if(string1[i]!=' ')
{
	string2[j]= string1[i];
	j++;
}
else
{
string2[j]='\0';
printf("%s",strrev(string2));
printf(" ");
j=0;
}
i++;
}
string2[j]='\0';
printf("%s",strrev(string2));
getch();
}