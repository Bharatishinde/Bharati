#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[50]="bharati";
char str2[50]="shinde";
char str3[50];
int len;
clrscr();
strcpy(str3,str1);
printf("\n Third String is:%s",str3);
len=strlen(str1);
printf("\n String length is=%d",len);
strcat(str1,str2);
printf("\n New string is=%s",str1);
getch();
}