#include<stdio.h>
int main()
{
	int m,n,a,b,r;
	scanf("%d %d",&m,&n);
	a=m;
	b=n;
	while(a%b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("�������Ϊ��%d\n",b);
	printf("��С������Ϊ��%d\n",m*n/b);

return 0;
}