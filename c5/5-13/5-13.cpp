#include <stdio.h>
#include <math.h>
int main()
{
	float x1,x2,a;
	printf("请输入一个正数:");
	scanf("%f",&a);
	x1=1;
	x2=(x1+a/x1)/2;
	do
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	while(fabs(x1-x2)>=1e-5);
	printf("平方根为：%8.5f\n",x2);
	return 0;
}

