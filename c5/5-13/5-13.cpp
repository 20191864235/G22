#include <stdio.h>
#include <math.h>
int main()
{
	float x1,x2,a;
	printf("������һ������:");
	scanf("%f",&a);
	x1=1;
	x2=(x1+a/x1)/2;
	do
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	while(fabs(x1-x2)>=1e-5);
	printf("ƽ����Ϊ��%8.5f\n",x2);
	return 0;
}

