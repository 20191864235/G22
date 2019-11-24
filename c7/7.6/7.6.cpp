#include<stdio.h>
#include<string.h>
void my_strcat(char s1[],char s2[])   //   定义字符串链接函数
{
	int i,len1=strlen(s1),len2=strlen(s2);   //strlen  测字符串长度的函数
	for(i=0;i<len2;i++)
		s1[i+len1]=s2[i];
	s1[i+len1]='\0';
}
int main()
{
	char s1[80],s2[50];
	printf("请输入字符串1:\n");
	gets(s1);
	printf("请输入字符串2:\n");
	gets(s2);                    //输入字符串，只能输入一个字符串
	my_strcat(s1,s2);
	printf("字符串连接后:\n");
	puts(s1);                   //输出字符串，只能输出一个字符串
	return 0;
}