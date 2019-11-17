#include <stdio.h>
int main()
{
	double pi=2.0,term=2.0,n=1.0;
	while(n<=100000)
	{
		n=n+2;
		term=((n-1)/n)*((n+1)/n);
		pi=pi*term;
	}
	pi=pi*2;
	printf("pi=%10.8f\n",pi);
		return 0;
}