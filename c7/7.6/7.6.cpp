#include<stdio.h>
#include<string.h>
void my_strcat(char s1[],char s2[])   //   �����ַ������Ӻ���
{
	int i,len1=strlen(s1),len2=strlen(s2);   //strlen  ���ַ������ȵĺ���
	for(i=0;i<len2;i++)
		s1[i+len1]=s2[i];
	s1[i+len1]='\0';
}
int main()
{
	char s1[80],s2[50];
	printf("�������ַ���1:\n");
	gets(s1);
	printf("�������ַ���2:\n");
	gets(s2);                    //�����ַ�����ֻ������һ���ַ���
	my_strcat(s1,s2);
	printf("�ַ������Ӻ�:\n");
	puts(s1);                   //����ַ�����ֻ�����һ���ַ���
	return 0;
}