#include<stdio.h>







#include<math.h>







int main(int argc, char* argv[])







{







	int a[15];







	printf("输入十五个从大到小的数字:\n"); 







	for(int i=0;i<15;i++)







		scanf("%d",&a[i]);







	int low=0,high=14,mid,x;







	printf("输入一个数:");







	scanf("%d",&x);







	while(low<=high)







	{







		mid=(low+high)/2;







		if(x>a[mid])







			high=mid-1;







		else if(x<a[mid])







			low=mid+1;







		else break;







	}







	if(a[mid]==x)







		printf("这个数%d是第%d个元素的值\n",x,mid+1);







	if(x!=a[mid])







		printf("无此数\n");







	return 0;







}