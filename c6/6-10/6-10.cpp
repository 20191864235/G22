#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][80];
	int i,j;
	int daxie=0,xiaoxie=0,space=0,number=0,other=0;
	printf("please inter a line1 of character:   \n");
		gets(str[0]);
	printf("please inter a line2 of character:   \n");
		gets(str[1]);
	printf("please inter a line3 of character:   \n");
		gets(str[2]);
	for(i=0;i<3;i++)
	{
			for(j=0;j<80&&str[i][j]!='\0';j++)
			{
					if((str[i][j]>='A')&&(str[i][j]<='Z'))
						daxie = daxie + 1;
					else if((str[i][j]>='A')&&(str[i][j]<='z'))
						xiaoxie = xiaoxie + 1;
					else if((str[i][j]>='0')&&(str[i][j]<='9'))
						number = number + 1;
					else if(str[i][j]==' ')
						space = space + 1;
			        else
						other = other + 1;
			}
	}
	printf("daxie=%d\nxiaoxie=%d\nnumber=%d\nspace=%d\nother=%d\n",daxie,xiaoxie,number,space,other);



	return 0;
}

