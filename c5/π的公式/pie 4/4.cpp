#include <stdio.h>
#include <math.h>
int main()
{
	double pi=0.0,n=1.0,term=1.0;
	while(term>=1e-6)
	{
		pi=pi+term;
		n=n+2;
		term=1/(n*n);
	
	}
	pi=sqrt(pi*8);
	printf("pi=%10.8f\n",pi);
	return 0;
}