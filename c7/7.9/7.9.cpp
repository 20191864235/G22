#include<stdio.h>
#include<string.h>
 void fun(char s[])
 {
 	int  len=strlen(s);
	 int letter=0,num=0,space=0,other=0;
	  for (int i=0; i<len; i++)
	  {
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) 
		letter++;
        else if (s[i]>='0'&&s[i]<='9')
		 num++;
        else if (s[i]==' '||s[i]=='\t')
		 space++;
        else 
		other++;
    }
    printf("Letter=%d, Number=%d, Space=%d, Ohter=%d\n", letter, num, space, other);
 
 }
int main()
{
	char s[81];
	gets(s);
	 fun(s);
	return 0;
 } 
