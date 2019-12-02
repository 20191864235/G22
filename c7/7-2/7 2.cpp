#include "stdafx.h"
#include <math.h>
void main()
{
	void big(double a, double b, double c);
	void same(double a, double b,double c);
	void little(); 
	int a,b,c;
	double d;
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4.0*a*c;
	if(d>0)
		big(a,b,c);
	if(d==0)
		same(a,b,c);
	if(d<0)
		little(); 
}

void big(double a, double b, double c)
{
	double x1,x2,d;
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("x1=%lf,x2=%lf\n",x1,x2);
}
void same(double a, double b, double c) 
{
	double x;
	x=-b/2.0*a;
	printf("x1=x2=%lf\n",x);
}
void little()
{
printf("this equetion hasn't root!\n"); 
}