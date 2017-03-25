#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float celsus,fah;
clrscr();
printf("\n Enter temprature in celsus:");
scanf("%f",&celsus);
fah=(celsus*9/5)+32;
printf("Temptarure in Fahrenheit is %f=%f",celsus,fah);
getch();
}