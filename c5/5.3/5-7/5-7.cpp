
#include "stdafx.h"

int main()
{
	int num,k1,k2,k3;
	int num1=0,num2=0,num3=0;
	for(k1=1;k1<=100;k1++)
	{
		num1+=k1;
	}
	for(k2=1;k2<=50;k2++)
	{
		num2+=k2*k2;
	}
	for(k3=1;k3<=10;k3++)
	{
		num3+=1/k3;
	}
	num=num1+num2+num3;
	printf("%d\n",num);
	return 0;
}

