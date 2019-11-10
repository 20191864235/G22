
#include "stdafx.h"

int main()
{
	double I , bonus;
	
	scanf("%lf",&I);
	{
	if (I<=100000)
		bonus = I*0.1;
	else if (I>100000&&I<=200000)
		bonus = 100000*0.1+(I-100000)*0.075;
	else if (I>200000&&I<=400000)
		bonus = 200000*0.1+(I-200000)*0.05;
	else if (I>400000&&I<=600000)
		bonus = 400000*0.1+(I-400000)*0.03;
	else if (I>600000&&I<=1000000)
		bonus = 600000*0.1+(I-600000)*0.015;
	else if (I>1000000)
		bonus = 1000000*0.1+(I-1000000)*0.01;
	}
	printf("%lf\n",bonus);
	return 0;
}





