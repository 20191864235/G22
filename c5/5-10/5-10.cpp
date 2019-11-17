
#include "stdafx.h"

int main()
{
    int i;
    float sum=0.0,fz=2.0,fm=1.0,temp;   
    for(i=1;i<=20;i++)  
    {
        sum+=(fz/fm);
        temp=fz;
        fz=fz+fm;
        fm=temp;
    }
    printf("%f\n",sum);  
    return 0;
}
