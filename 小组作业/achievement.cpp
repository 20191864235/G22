#include "stdafx.h"
#include<stdio.h>

FILE *fp;

struct date{
	char name[100];
	long num;
	double grate[11];
	double sum,ave;
};

int x=0;

void WriteDown(date people[101]);
void SingleDog(date people[101]);
void SingleGrate(date people[101]);
void Sort1(date people[101]);
void Average(date people[101],double subject[11]);
void Find(date people[101]);
void Allsort(date people[101]);
void Sort2(int n,date people[101]);
void Sort3(date people[101]);
void Findaverage(date people[101],double subjectave[11]);
void Clean(date people[101],double subjectave[11]);
void Save(date people[101],double subjectave[11]);
void Read(date people[101],double subjectave[11]);
void Add(date people[101]);

int main()
{
	int nb;
	date student[101];
	double subjectave[11];   
	printf("****************************��ӭʹ��****************************\n");
    printf("***********************ѧ���ɼ�����ϵͳ*************************\n");
    printf("****************************************************************\n");
    printf("\n");
    printf("**********************��ѡ����Ҫ���еĲ���**********************\n");
    printf("****************************************************************\n");
    printf("\n");
	printf("*******************���Ҫ����ѧ����Ϣ�������� 1.****************\n"); 
	printf("******************���Ҫ����ѧ���ĳɼ��������� 2.***************\n");  
	printf("******************���Ҫ�����Ŀ�ķ����������� 3.***************\n");  
	printf("******************���Ҫ����ÿ�����ŵ�ƽ������******************\n"); 
	printf("**********����ÿ��ѧ�Ƶ�ѧ���ܷ�����ѧ��ƽ�������������� 4.*****\n"); 
	printf("*******************���Ҫ��ѯ������������ 5.********************\n"); 
	printf("***************���Ҫ��ѧ���ķ����������������� 6.************\n");
	printf("******************���Ҫ��ѯƽ�������������� 7.*****************\n");
	printf("********************���Ҫ���ѧ���������� 8.*******************\n"); 
	printf("********************���Ҫ�������ݣ������� 9.*******************\n"); 
	printf("******************�������������ݣ������� 10.******************\n");  
	printf("***********************�˳����������� 0.**********************\n");
	do
	{
		printf("������:");
		scanf("%d",&nb);
		if(nb==0)
			break;
		if(nb>=1&&nb<=10)
			switch(nb)
			{
				case 1:WriteDown(student);break;
				case 2:SingleDog(student);break;
				case 3:SingleGrate(student);break;
				case 4:Average(student,subjectave);break;
				case 5:Find(student);break;
				case 6:Allsort(student);break;
				case 7:Findaverage(student,subjectave);break;
				case 8:Add(student);break;
				case 9:Save(student,subjectave);break;
				case 10:Read(student,subjectave);break;
				default:break;
			}
		else
			printf("Error!\n");
	}while(nb);
	return 0;
}

void WriteDown(date people[101])    // 1 ����¼��ѧ������ѧ��
{
	int xx,temp;
	temp=x++;
	printf("Please enter the number of student:");
	scanf("%d",&xx);
	while(temp+xx>100)
	{
		printf("Please enter an integer less than or equal to 100.\n");
		printf("Please the number of student:");
		scanf("%d",&xx);
	}
	printf("Please enter all students' names and student ID.\n");
	for(x;x<=temp+xx;x++)
	{
		scanf("%s%ld",&people[x].name,&people[x].num);
		people[x].sum=people[x].ave=0;
	}
	x--;
}

void SingleDog(date people[101])   // 2 ¼�뵥��ѧ������
{
	long n; 
	int j;   
	char a;
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the serial number of the subject:");
		scanf("%d",&j);
		if(j<0||j>10)
			printf("Error!\n");
		else
		{
			if(j==0)
				break;
			printf("Please enter the student's ID number:");
			scanf("%ld",&n);
			for(int i=1;i<=x;i++)
				if(people[i].num==n)
				{
					printf("Is he or she %s?(Y or N)\n",people[i].name);
					a=getchar();
					a=getchar();
					if(a=='Y')
					{
						printf("Please enter his or her subject%d score:",j);
						scanf("%lf",&people[i].grate[j]);
						break;	
					}
					else 
						printf("Error!\n");
				}
		}
	}while(j>=1&&j<=10);
}

void SingleGrate(date people[101])   // 3 ����¼�뵥�Ƴɼ�
{
	Sort1(people);
	int i;
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the serial number of the subject:");
		scanf("%d",&i);
		if(i<0||i>10)
			printf("Error!\n");
		else
		{
			if(i==0)
				break;
			printf("Please enter grades in order of student ID.\n");
			for(int j=1;j<=x;j++)
			{
				if(people[j].grate[i])
					printf("%s : %.1lf\n",people[j].name,people[j].grate[i]);
				else
				{
					printf("%s : ",people[j].name);
					scanf("%lf",&people[j].grate[i]); 
				}
			}
		}
	}while(i>=1&&i<=10);
}

void Sort1(date people[101])
{
	date temp;
	for(int i=1;i<=x;i++)
		for(int j=i+1;j<=x;j++)
			if(people[i].num>people[j].num)
			{
				temp=people[i];
				people[i]=people[j];
				people[j]=temp;
			}
}

void Average(date people[101],double subjectave[11])   // 4 ����ƽ���֣������ܷ֡�ƽ����
{
	int i,j;
	for(i=1;i<=10;i++)   //����ƽ����
		for(j=1;j<=x;j++)
			subjectave[i]+=people[j].grate[i];
	for(i=1;i<=10;i++)
		subjectave[i]/=(double)x;
	for(i=1;i<=x;i++)    //�����ܷ�ƽ����
	{
		people[i].sum=0;
		for(j=1;j<=10;j++)
			people[i].sum+=people[i].grate[j];
		people[i].ave=people[i].sum/10.0;
	}
}

void Find(date people[101])        // 5 ���˳ɼ���ѯ
{
	long n;
	char a;
	printf("Please enter your Student ID:\n");
	scanf("%ld",&n);
	for(int i=1;i<=x;i++)
	{
		if(people[i].num==n)
		{
			printf("Is he or she %s?(Y or N)\n",people[i].name);
			a=getchar();
			a=getchar();
			if(a=='Y')
			{
				for(int j=1;j<=10;j++)
					printf("Subject %d:  %.1lf\n",j,people[i].grate[j]);
				printf("Total:  %.1lf\tAverage:   %.1lf\n",people[i].sum,people[i].ave);
			}
			else 
				printf("Error!\n");
		}
	}
}

void Allsort(date people[101])    // 6 ���ƻ��ܳɼ�����
{
	Sort3(people);
	char a;
	int n;
	printf("Would you like to check the total ranking or single subject ranking?\nPlease T(total) or S(single):\n");
	a=getchar();
	a=getchar();
	if(a=='S')
	{
		printf("(If you want to quit the program,please enter 0.)\n");
		do
		{
			printf("Please enter the subject:");
			scanf("%d",&n);
			if(n==0)
				break;
			Sort2(n,people);
		}while(n>=1&&n<=10);
	}
	else if(a=='T')
		for(int t=1;t<=x;t++)
			printf("%d  %ld  %s  %.1lf\n",t,people[t].num,people[t].name,people[t].sum);
	else 
		printf("Error!\n");
}

void Sort2(int n,date people[101])
{
	date temp;
	for(int i=1;i<=x;i++)
		for(int j=i+1;j<=x;j++)
			if(people[i].grate[n]<people[j].grate[n])
			{
				temp=people[i];
				people[i]=people[j];
				people[j]=temp;
			}
	for(int t=1;t<=x;t++)
		printf("%d  %ld  %s  %.1lf\n",t,people[t].num,people[t].name,people[t].grate[n]);
}

void Sort3(date people[101])
{
	date temp;
	for(int i=1;i<=x;i++)
		for(int j=i+1;j<=x;j++)
			if(people[i].sum<people[j].sum)
			{
				temp=people[i];
				people[i]=people[j];
				people[j]=temp;
			}
}

void Findaverage(date people[101],double subjectave[11])    // 7 ����ƽ���ֲ�ѯ
{
	int n;
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the subject:");
		scanf("%d",&n);
		if(n<0||n>10)
			printf("Error!\n");
		else
		{
			if(n==0)
				break;
			printf("Average:%.1lf\n",subjectave[n]);
		}
	}while(n>=1&&n<=10);
}

void Add(date people[101])          //  8  ���һ��ѧ���ĸ�����Ϣ���ɼ�
{
	int flag=1,temp;
    temp=++x;
	if(x>100)
	{
		printf("Error!\n");
		return ;
	}
	printf("Please enter the student's ID:\n");
	scanf("%ld",&people[x].num);
	for(int j=1;j<x;j++)
		if(people[j].num==people[x].num)
		{
			printf("The student's information has been entered.\nHe/She's name is %s\n",people[j].name);
			temp=j;
			flag=0;
			break;
		}
	if(flag)
	{
		printf("Please enter the student's name:\n");
		scanf("%s",&people[x].name);
	}
	people[temp].sum=0;
	for(int i=1;i<=10;i++)
	{
		printf("Please enter the student's subject%d score:",i);
		scanf("%lf",&people[temp].grate[i]);
		people[temp].sum+=people[temp].grate[i];
	}
	people[temp].ave=people[temp].sum/10.0;
}

void Save(date people[101],double subjectave[11])     // 9 ���ݴ浵
{
	Sort1(people);
	fp=fopen("date.txt","w");
	fprintf(fp,"Student Number= %d\n",x);
	for(int i=1;i<=x;i++)
	{
		fprintf(fp,"ID: %ld  %s      Total: %.1lf\t Average: %.1lf\n",people[i].num,people[i].name,people[i].sum,people[i].ave);
		for(int j=1;j<=10;j++)
		{
			if(j%5==0)
				fprintf(fp,"Subject%d: %.1lf\n",j,people[i].grate[j]);
			else
				fprintf(fp,"Subject%d: %.1lf  ",j,people[i].grate[j]);
		}
	}
	fprintf(fp,"Average scores of all students:\n");
	for(int t=1;t<=10;t++)
	{
		if(t%5==0)
			fprintf(fp,"Subject%d: %.1lf\n",t,subjectave[t]);
		else
			fprintf(fp,"Subject%d: %.1lf  ",t,subjectave[t]);
	}
	fclose(fp); 
}

void Read(date people[101],double subjectave[11])    // 10 ���ݶ�ȡ
{
	Clean(people,subjectave);
	fp=fopen("date.txt","r");
	char temp[20];
	fscanf(fp,"%s %s %d",&temp,&temp,&x);
	for(int i=1;i<=x;i++)
	{
		fscanf(fp,"%s %ld %s %s %lf %s %lf",&temp,&people[i].num,&people[i].name,&temp,&people[i].sum,&temp,&people[i].ave);
		for(int j=1;j<=10;j++)
			fscanf(fp,"%s %lf",&temp,&people[i].grate[j]);
	}
	fscanf(fp,"%s %s %s %s %s",&temp,&temp,&temp,&temp,&temp);
	for(int t=1;t<=10;t++)
		fscanf(fp,"%s %lf",&temp,&subjectave[t]);
	fclose(fp); 
}

void Clean(date people[101],double subjectave[11])
{
	for(int i=1;i<=100;i++)
	{
		people[i].ave=people[i].sum=0;
		for(int j=1;j<=10;j++)
			people[i].grate[j]=0;
	}
}


