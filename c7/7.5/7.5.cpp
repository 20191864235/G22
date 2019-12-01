#include<stdio.h>
#include<string.h>
int main()
{
	void reverse_str(char str[]);
	char str [100];
	printf("请输入字符串为：");
	gets(str);
	printf("您输入的字符串为：\n%s\n",str);
	reverse_str(str);
	printf("反序后的字符串为：\n%s",str);
	return 0;
}
void reverse_str(char str[])
{
	int i,j;
	char str_reverse[100];
	for(i=0,j=strlen(str)-1;str[i]!='/0';i++,j--)
	{
		str_reverse[i]=str[j];
	}
	str_reverse[i]='/0';
	strcpy(str,str_reverse);
}