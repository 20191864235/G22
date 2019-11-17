
#include "stdafx.h"

#include <stdio.h> 

#include <math.h> 

int main() 

{  

int a,b,c,d;	int count = 1; 

scanf("%d",&a);	c = a; 

printf("ÄæÐò£º\n"); 

while(c / 10 != 0) 

{ 

count++;	b = c % 10; 

printf("%d\n",b); 

c = c / 10;

}


b = c % 10; 

printf("%d\n",b); 




printf("Î»ÊýÊÇ£º%d\n",count); 

printf("Ë³Ðò£º\n"); 

while(a % 10 != 0)  

{  

d = a / (int)pow(10,(count-1));  

printf("%d\n",d); 

a = a % (int)pow(10,count-1); 

count--; 

}  

return 0; 

}

