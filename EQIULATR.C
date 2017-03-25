#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int s;
float area;
clrscr();
printf("\n Enter the Side of Equiltral Triangle:");
scanf("%d",&s);
area=(sqrt(3))/4*(s*s);
printf("\n Area of Equiltral Triangle Is=%f",area);
getch();
}
