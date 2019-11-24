#include "stdafx.h"
#include <time.h>
int main()
{
	long i=100;
	long c1,c2,m;
	int n[9]; 
	int num[7][9]={{1,8,27,64,125,216,343,512,729},{1,16,81,256,625,1296,2401,4096,6561},{1,32,243,1024,3125,7776,16807,32768,59049},{1,64,729,4096,15625,46656,117649,262144,531411},{1,128,2187,16384,78125,279936,823543,2097152,4782969},{1,256,6561,65536,390625,1679616,5764801,16777216,43046721},{1,512,19683,262144,1953125,10077696,40353607,134217728,387420489}};
	c1=clock();

	while(i<1000000000)
	{
		if(i==100)
		{
			while(i<1000)
			{
				n[0]=i/100;
				n[1]=i%100/10;
				n[2]=i%10;
				for(m=0;m<3;m++)
				{
					if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[0][0];
					else if(n[m]==2)
						n[m]=num[0][1];
					else if(n[m]==3)
						n[m]=num[0][2];
					else if(n[m]==4)
						n[m]=num[0][3];
					else if(n[m]==5)
						n[m]=num[0][4];
					else if(n[m]==6)
						n[m]=num[0][5];
					else if(n[m]==7)
						n[m]=num[0][6];
					else if(n[m]==8)
						n[m]=num[0][7];
					else if(n[m]==9)
						n[m]=num[0][8];
				}
				if (i==n[0]+n[1]+n[2])
					printf("%d\n",i);
				i++;
			}
		}
		else if(i==1000)
		{
			while(i<10000)
			{
				n[0]=i/1000;
				n[1]=i%1000/100;
				n[2]=i%100/10;
				n[3]=i%10;
				for(m=0;m<4;m++)
				{
					if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[1][0];
					else if(n[m]==2)
						n[m]=num[1][1];
					else if(n[m]==3)
						n[m]=num[1][2];
					else if(n[m]==4)
						n[m]=num[1][3];
					else if(n[m]==5)
						n[m]=num[1][4];
					else if(n[m]==6)
						n[m]=num[1][5];
					else if(n[m]==7)
						n[m]=num[1][6];
					else if(n[m]==8)
						n[m]=num[1][7];
					else if(n[m]==9)
						n[m]=num[1][8];
				}
				if (i==n[0]+n[1]+n[2]+n[3])
					printf("%d\n",i);
				i++;
			}
		}
		else if(i==10000)
		{
			while(i<100000)
			{
				n[0]=i/10000;
				n[1]=i%10000/1000;
				n[2]=i%1000/100;
				n[3]=i%100/10;
				n[4]=i%10;
				for(m=0;m<5;m++)
				{
					if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[2][0];
					else if(n[m]==2)
						n[m]=num[2][1];
					else if(n[m]==3)
						n[m]=num[2][2];
					else if(n[m]==4)
						n[m]=num[2][3];
					else if(n[m]==5)
						n[m]=num[2][4];
					else if(n[m]==6)
						n[m]=num[2][5];
					else if(n[m]==7)
						n[m]=num[2][6];
					else if(n[m]==8)
						n[m]=num[2][7];
					else if(n[m]==9)
						n[m]=num[2][8];
				}
				if (i==n[0]+n[1]+n[2]+n[3]+n[4])
					printf("%d\n",i);
				i++;
			}
		}
		else if(i==100000)
		{
			while(i<1000000)
			{
				n[0]=i/100000;
				n[1]=i%100000/10000;
				n[2]=i%10000/1000;
				n[3]=i%1000/100;
				n[4]=i%100/10;
				n[5]=i%10;
				for(m=0;m<6;m++)
				{
				if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[3][0];
					else if(n[m]==2)
						n[m]=num[3][1];
					else if(n[m]==3)
						n[m]=num[3][2];
					else if(n[m]==4)
						n[m]=num[3][3];
					else if(n[m]==5)
						n[m]=num[3][4];
					else if(n[m]==6)
						n[m]=num[3][5];
					else if(n[m]==7)
						n[m]=num[3][6];
					else if(n[m]==8)
						n[m]=num[3][7];
					else if(n[m]==9)
						n[m]=num[3][8];
				}
				if (i==n[0]+n[1]+n[2]+n[3]+n[4]+n[5])
					printf("%d\n",i);
				i++;
			}
		}
		else if(i==1000000)
		{
			while(i<10000000)
			{
				n[0]=i/1000000;
				n[1]=i%1000000/100000;
				n[2]=i%100000/10000;
				n[3]=i%10000/1000;
				n[4]=i%1000/100;
				n[5]=i%100/10;
				n[6]=i%10;
				for(m=0;m<7;m++)
				{
					if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[4][0];
					else if(n[m]==2)
						n[m]=num[4][1];
					else if(n[m]==3)
						n[m]=num[4][2];
					else if(n[m]==4)
						n[m]=num[4][3];
					else if(n[m]==5)
						n[m]=num[4][4];
					else if(n[m]==6)
						n[m]=num[4][5];
					else if(n[m]==7)
						n[m]=num[4][6];
					else if(n[m]==8)
						n[m]=num[4][7];
					else if(n[m]==9)
						n[m]=num[4][8];
				}
				if (i==n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6])
					printf("%d\n",i);
				i++;
			}
		}	
		else if(i==10000000)
		{
			while(i<100000000)
			{
				n[0]=i/10000000;
				n[1]=i%10000000/1000000;
				n[2]=i%1000000/100000;
				n[3]=i%100000/10000;
				n[4]=i%10000/1000;
				n[5]=i%1000/100;
				n[6]=i%100/10;
				n[7]=i%10;
				for(m=0;m<8;m++)
				{
					if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[5][0];
					else if(n[m]==2)
						n[m]=num[5][1];
					else if(n[m]==3)
						n[m]=num[5][2];
					else if(n[m]==4)
						n[m]=num[5][3];
					else if(n[m]==5)
						n[m]=num[5][4];
					else if(n[m]==6)
						n[m]=num[5][5];
					else if(n[m]==7)
						n[m]=num[5][6];
					else if(n[m]==8)
						n[m]=num[5][7];
					else if(n[m]==9)
						n[m]=num[5][8];
				}
				if (i==n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7])
					printf("%d\n",i);
				i++;
			}
		}
		else if(i==100000000)
		{
			while(i<1000000000)
			{
				n[0]=i/100000000;
				n[1]=i%100000000/10000000;
				n[2]=i%10000000/1000000;
				n[3]=i%1000000/100000;
				n[4]=i%100000/10000;
				n[5]=i%10000/1000;
				n[6]=i%1000/100;
				n[7]=i%100/10;
				n[8]=i%10;
				for(m=0;m<9;m++)
				{
					if(n[m]==0)
						n[m]=0;
					else if(n[m]==1)
						n[m]=num[6][0];
					else if(n[m]==2)
						n[m]=num[6][1];
					else if(n[m]==3)
						n[m]=num[6][2];
					else if(n[m]==4)
						n[m]=num[6][3];
					else if(n[m]==5)
						n[m]=num[6][4];
					else if(n[m]==6)
						n[m]=num[6][5];
					else if(n[m]==7)
						n[m]=num[6][6];
					else if(n[m]==8)
						n[m]=num[6][7];
					else if(n[m]==9)
						n[m]=num[6][8];
				}
				if (i==n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8])
					printf("%d\n",i);
				i++;
			}
		}
	
		i=i*10;

	}
	c2=clock();
	printf("ÓÃÊ±:%lfÃë\n",(c2-c1)/1000);
	return 0;
}
