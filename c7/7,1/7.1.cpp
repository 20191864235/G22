#include<stdio.h>
int gcd(int a,int b)
{
	int i=0,g=0;
	int m=0;
	m=a<b ?a : b;
	for(i=1;i<=m;i++)
	{
		if(a%i==0 && b%i==0)
			g=i;
	}
	return g;
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()
{
	int a=0,b=0;
	int c=0,d=0;
	printf("��������������\n");
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	d=lcm(a,b);
	printf("���Լ��Ϊ��gcd=%d,��С������Ϊ��lcm=%d\n",c,d);
	return 0;
}