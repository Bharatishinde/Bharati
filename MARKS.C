#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c,d,e,g;
	int total;
	float average,percentage;
	clrscr();
	printf("\n Enter marks of five Subjects:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	g=total;
	printf("\n Total Marks=%d",total);
	average=g/5;
	printf("\n Average of Marks=%2f",average);
	percentage=(g*100)/500;
	printf("\n Percentage is=%2f",percentage);
	getch();
	}

