#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float celsus,fah;
clrscr();
printf("\n Enter temprature in faherinheit:");
scanf("%f",&fah);
celsus=(fah-32)*5/9;
printf("Temptarure in Celsusu is %f=%f",fah,celsus);
getch();
}
