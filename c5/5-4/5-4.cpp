#include <stdio.h>
int main()
{
	char m;
	int letters=0,space=0,number=0,other=0;
	printf("������һ���ַ���\n");
	while((m=getchar())!='\n')
	{
		if(m>='a'&&m<='z'||m>='A'&&m<='Z')
			letters++;
		else if (m==' ')
			space++;
		else if(m>='0'&&m<='9')
			number++;
		else
			other++;
	} 
	printf("��ĸ:%d\n �ո�%d\n ���֣�%d\n ������%d\n", letters,space,number,other);
	return 0;
}