
#include "stdafx.h"

int main()
{
	int i, j, sum;      

	for (i = 2; i <= 1000; i++)
	{
		sum = 1;
		for (j = 2; j <= i / 2; j++)
			if (i%j == 0)         
				sum += j;

		if (sum == i)     
		{
			printf("%d its factors are 1, ", i);     

			for (j = 2; j <= i / 2; j++)
				if (i%j == 0)
					printf("%d, ", j);     

			printf("\n");
		}
	}

	return 0;
}