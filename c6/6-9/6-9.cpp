#include<stdio.h>







#include<math.h>







int main(int argc, char* argv[])







{







	int a[15];







	printf("����ʮ����Ӵ�С������:\n"); 







	for(int i=0;i<15;i++)







		scanf("%d",&a[i]);







	int low=0,high=14,mid,x;







	printf("����һ����:");







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







		printf("�����%d�ǵ�%d��Ԫ�ص�ֵ\n",x,mid+1);







	if(x!=a[mid])







		printf("�޴���\n");







	return 0;







}