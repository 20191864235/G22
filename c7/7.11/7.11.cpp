#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stob(char s[]);
int main()
{
	char str[11];
	gets(str);
	stob(str);
	puts(str);
	system("pause");
	return 0;
}
void stob(char s[])
{
	int i,j;
	char temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
}