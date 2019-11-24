#include<stdio.h>
#include<string.h>
void input(char st[]);
void output(char st[]);
void letter(char x[],char y[]);
int main()
{
	char s1[20],s2[10];
	input(s1);
	letter(s1,s2);
	output(s2);
	return 0;
}
void input(char st[])
{
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(st);
}
void letter(char x[],char y[])
{
	int n=strlen(x);
	for(int i=0,j=0;j<n;(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')?y[j++]=x[i++]:i++);
	y[j]='\0';
}
void output(char st[])
{
	printf("Êä³ö×Ö·û´®:%s\n",st);
}
