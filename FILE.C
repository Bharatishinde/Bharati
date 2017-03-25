
#include<stdio.h>
#include<conio.h>
void main()
{
char name[100];
FILE *fptr;
int age;
float salary;
clrscr();
fptr=fopen("Bharati.txt","w");
if(fptr==NULL)
{
printf("\n File does not exist");
return;
}
printf("\n Enter Name:");
scanf("%s",&name);
fprintf(fptr,"name= %s\n",name);
printf("\n Enter age:");
scanf("%d",&age);
fprintf(fptr,"Age=%d",age);
printf("\n Enter Salary:");
scanf("%f",&salary);
fprintf(fptr,"salary=%f",salary);
fclose(fptr);
}