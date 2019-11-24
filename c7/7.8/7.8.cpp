#include<stdio.h>
#define N 4
void fun(char s[N])
{
	int i,num[N];
	for(i=0;i<N;i++)
		num[i]=s[i]-'0';
	for(i=0;i<N;i++)
		printf("%d ",num[i]);
}
int main()
{
	char s[N];
	printf("请输入一个四位数:\n");
	gets(s);
	fun(s);
	return 0;
}