
#include "stdafx.h"

int main()
{
	int a,b,c,d,num;
	scanf ("%d %d %d %d",&a,&b,&c,&d);
	
	if (a>=b)
		{
		num=a;
		a=b;
		b=num;
		}
	if (a>=c)
		{
		num=a;
		a=c;
		c=num;
		}
	if (a>=d)
		{
		num=a;
		a=d;
		d=num;
		}
 	if(b>=c)
		{
		num=c;
		c=d;
		d=num;
		}
	if(b>=d)
		{
		num=b;
		b=d;
	 	d=num;
		}
	if(c>=d)
		{
		num=c;
		c=d;
		d=num;
		}
	
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}

