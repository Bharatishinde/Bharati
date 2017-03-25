#include<stdio.h>
#include<conio.h>
//#include<math.h>
void main()
{
int len;
float meter=0,kilometer=0.0;
clrscr();
printf("\n Enter length in centimeter:");
scanf("%d",&len);
meter=len/100;
printf("\n meter=%.2f",meter);
kilometer=meter/1000;
printf("\n kilometer=%f",kilometer);
getch();

}