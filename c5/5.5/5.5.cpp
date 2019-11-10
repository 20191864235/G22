#include<stdio.h>
int main()
{
	int a,n,sum=0,i,t=0;
	scanf("%d %d",&a,&n);
	i=1;
	while(i<=n)
	{
		t=t*10+a;
		sum=sum+t;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}

