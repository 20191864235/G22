
#include "stdafx.h"

int main(int argc, char* argv[])
{

	int peach = 0;
	int rest = 1;
	int day = 0;
	for(day = 9; day > 0; day--)
	{
		peach = (rest + 1) * 2;
		rest = peach;
	}
	printf("���ӵ�һ��һ��ժ��%d������\n",peach);
	return 0;
}
