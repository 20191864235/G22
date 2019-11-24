
#include <stdio.h>
int main(int argc, char* argv[])
{
   
	
	int		a[10][11];
	int		i,n;
	for(n=0,i=1;n<=9;n++,i++)
	{
		a[n][i]=0;
		a[n][0]=1;
	}
	printf("%5d\n",a[0][0]);
	for(n=1;n<=9;n++)
	{
		for(i=1;i<=n;i++)
			a[n][i]=a[n-1][i-1]+a[n-1][i];
		for(i=0;i<=n;i++)
			printf("%5d",a[n][i]);
		printf("\n");
	}
	return 0;
}

