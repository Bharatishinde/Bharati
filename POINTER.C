


#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr;
int i=20;
clrscr();
//printf("%d",i);
printf("%d",&i);
printf("%u\n",i);
printf("%u\n",&i);
ptr=&i;
printf("%u\n",*ptr);
printf("%u\n",i);
getch();
}

