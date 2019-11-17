
#include "stdafx.h"

int main()
{
	int prime[101];
	int i,j,k;
	for (i = 1; i < 101; i++)
	{
		prime[i] = 1;
	}
	for (i = 2; i <= 100; i ++)
	{
		if (prime[i] != 0)
		{
			for ( j = 2*i; j <= 100; j += i)
				prime[j] = 0;
		}
	}
	for (k = 1; k <= 100; k++)
	{
		if (prime[k] == 1)
			printf("%d\n", k);
	}
	return 0;
}
