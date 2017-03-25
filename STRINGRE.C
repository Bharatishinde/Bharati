#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string[100];
char temp;
int i,j=0;
clrscr();
printf("\n Enter a string:");
gets(string);
i=0;
j=strlen(string)-1;
while(i<j)
{
temp=string[i];
string[i]=string[j];
string[j]=temp;
i++;
j--;
}
printf("\n Reverse string is:%s",string);
getch();
}