#include <stdio.h>
int main()
{
	char m;
	int letters=0,space=0,number=0,other=0;
	printf("请输入一行字符：\n");
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
	printf("字母:%d\n 空格：%d\n 数字：%d\n 其他：%d\n", letters,space,number,other);
	return 0;
}