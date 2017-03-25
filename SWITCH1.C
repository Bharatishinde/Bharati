#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("Enter any choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("sunday");
break;
case 2:
printf("monday");
break;
case 3:
printf("tuesday");
break;
case 4:
printf("wednsday");
break;
case 5:
printf("thrsday");
break;
case 6:
printf("friday");
break;
case 7:
printf("saturday");
}
getch();
}