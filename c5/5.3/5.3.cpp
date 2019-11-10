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
	printf("最大公因数为：%d\n",b);
	printf("最小公倍数为：%d\n",m*n/b);

return 0;
}