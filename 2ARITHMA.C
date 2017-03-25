#include<stdio.h>
#include<conio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

void main()
{
int a,b,c;
clrscr();
printf("Enter any two no");
scanf("%d%d",&a,&b);
add(a,b);
sub(a,b);
mul(a,b);
div(a,b);
getch();
}
void add(int x,int y)
{
int z;
z=x+y;
printf("Sum is:%d",z);
}
void sub(int p,int q)
{
int r;
r=p-q;
printf("\n Substraction is:%d",r);
}

void mul(int e,int f)
{
int g;
g=e*f;
printf("\n Multiplication is:%d",g);
}
void div(int h,int i)
{
int j;
j=h/i;
printf("\n Division is:%d",j);
}
