
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50];
int i=0,ch;
clrscr();
printf("\n Enter a string:");
gets(s);
while(s[i]!='\0')
{
ch=s[i];
if(ch>='A' && ch<='Z')
s[i]=s[i]+32;

else if(ch>='a' && ch<='z')
s[i]=s[i]-32;
i++;
}
printf("%s",s);
getch();
}