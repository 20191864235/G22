
#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	int num;
	int is_prime(int n);

	scanf("%d",&num);

	if(is_prime(num))

		printf("%d是素数\n",num);

	else

		printf("%d不是素数\n",num);


	return 0;
}

int is_prime(int n)
{

int i;

for(i=2;i<=sqrt(n);i++)

if(n%i==0)

return 0;

}
