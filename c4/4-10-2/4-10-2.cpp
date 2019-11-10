#include "stdafx.h"

int main(int argc, char* argv[])
{
	double I , bonus ;
	int i;
	
	scanf("%lf",&I);
	i = I/100000;
	if(i>10)
		i=10;
	switch (i)
	{
		case 0:
			bonus = I*0.1;break;
		case 1:
			bonus = 100000*0.1+(I-100000)*0.075;break;
		case 2:
		case 3:
			bonus = 200000*0.1+(I-200000)*0.05;break;
		case 4:
		case 5:
			bonus = 400000*0.1+(I-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:
			bonus = 600000*0.1+(I-600000)*0.015;break;
		case 10:
			bonus = 1000000*0.1+(I-1000000)*0.01;
	}
	printf("%lf\n",bonus);	
	return 0;
}