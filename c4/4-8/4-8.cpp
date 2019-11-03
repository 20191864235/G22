
#include "stdafx.h"

int main()
{
	int x;

	char a,b,c,d,e;

	a='A',b='B',c='C',d='D',e='E';

	scanf ("%d",&x);

	if (x>=90)
		printf("%c\n",a);

	else if (x<=89&&x>=80)
		printf("%c\n",b);

	else if(x<=79&&x>=70)
		printf("%c\n",c);

	else if (x<=69&&x>=60)
		printf("%c\n",d);

	else (x<60);
		printf("%c\n",e);

	return 0;
}

