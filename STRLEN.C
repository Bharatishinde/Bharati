#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50];
int len;
clrscr();
printf("\n Enter a string to calculate length of string:");
gets(a);
len=strlen(a);
printf("\n Length of string is=%d",len);
getch();
}