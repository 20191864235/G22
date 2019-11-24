#include<stdio.h>
#define N 100
#define M 1e8
int main()
{
	int n,m,i,j;
	int a[N][N],maxh[N],minl[N];  //0 每行最大   1 每列最小
	printf("行数：");
	scanf("%d",&n);
	printf("列数：");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
			minl[j]=M;
		}
		maxh[i]=0;
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(minl[j]>a[i][j])
				minl[j]=a[i][j];
	for(j=1;j<=m;j++)
		for(i=1;i<=n;i++)
			if(maxh[i]<a[i][j])
				maxh[i]=a[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(a[i][j]==maxh[j]&&a[i][j]==minl[i])
				printf("%d (%d,%d)\n",a[i][j],j,i);
	return 0;
}

