#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string[100];
int i=0;
int count[26]={0};
printf("\n Enter a String:");
scanf("%s",&string);
while(string[i]!='\0')
{
if(string[i]>='a' && string[i]<'z' || string[i]>='A' && string[i]<='Z')
{
	if(string[i]>='a' && string[i]<='z')
	{
	count[string[i]-'a']++;
	}
	else if(string[i]>='A' && string[i]<='Z')
	count[string[i]-'A']++;
}
i++;
}
for(i=0;i<26;i++)
{
	if(count[i]>1)
	printf("%c-%d\n",i+'a',count[i]);
}
getch();
}