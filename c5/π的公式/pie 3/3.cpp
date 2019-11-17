#include <stdio.h>
#include <math.h>
int main()
{
	double n=1.0,term=0.0,pi=1.0;
	while(n<=100000)
	{
		term=((n+1)*(n+1))/(n*(n+2));
		pi=pi*term;
		n=n+2;
	}
	pi=pi*2;
	printf("pi=%10.8f\n",pi);
		return 0;
}

