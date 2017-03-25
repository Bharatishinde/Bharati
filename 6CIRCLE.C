#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int radi;
float area;
float circum,dia;
clrscr();
printf("\n Enter radious of circle");
scanf("%d",&radi);
dia=2*radi;
area=2*3.14*(radi*radi);
circum=2*3.14*radi;
printf("\n Diameter Of Circle is:%2f",dia);
printf("\n Area Of Circle is:%2f",area);
printf("\n Circumfrance  Of Circle is:%2f",circum);
getch();
}
