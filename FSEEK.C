#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fptr;
clrscr();
fptr=fopen("file.txt","w");
puts("Hello world");
fseek(fptr,3,SEEK_SET);
puts("technogrowth");
fclose(fptr);
getch();
}