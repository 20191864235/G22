#include<stdio.h>
#include<string.h>
int main()
{
	void reverse_str(char str[]);
	char str [100];
	printf("�������ַ���Ϊ��");
	gets(str);
	printf("��������ַ���Ϊ��\n%s\n",str);
	reverse_str(str);
	printf("�������ַ���Ϊ��\n%s",str);
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