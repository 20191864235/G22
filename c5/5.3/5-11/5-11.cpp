
#include "stdafx.h"

int main(int argc, char* argv[])
{

	float sn=100.0,hn=sn/2; 
	int n; 
	for(n=2;n<=10;n++) 
	{ 
		sn=sn+2*hn; 
		hn=hn/2; 
	} 
	printf("%f m\n",sn); 
	printf("%f m\n",hn); 

	return 0;
}

