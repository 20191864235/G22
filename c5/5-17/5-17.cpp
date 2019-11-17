#include <stdio.h>
int main()
{
	char j,i,k;
	for(j='x';j<='z';j++)
		for(i='x';i<='z';i++)
			if(j!=i)
			for(k='x';k<='z';k++)
				if(j!=k&&i!=k)
					if(j!='x'&&k!='x'&&k!='z')
						printf("A¶Ô%c\nB¶Ô%c\nC¶Ô%c\n",j,i,k);
				return 0;
}


