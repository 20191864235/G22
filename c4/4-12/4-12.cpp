
#include "stdafx.h"

#include<math.h>

int main()
{
	float x,y;
	printf("x=");
	scanf("%f",&x);
	printf("y=");
	scanf("%f",&y);
	if(((x-2)*(x-2)+(y-2)*(y-2)<=1)||((x+2)*(x+2)+(y+2)*(y+2)<=1)||((x-2)*(x-2)+(y+2)*(y+2)<=1)||((x+2)*(x+2)+(y-2)*(y-2)<=1))
	{
		printf("该点的高度为10\n");
	}
	else
		printf("该点的高度为0");
	return 0;
}