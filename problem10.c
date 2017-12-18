#include <stdio.h>

#define N 2000000

int main()
{
	long int i;
	long int j;
	int flag = 1;
	long int sum = 10;
	for(i = 7; i < N; i = i + 2)
	{
		for(j = 3; j < i; j = j + 2)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			sum = sum + i;
		flag = 1;	
	}
	printf("result = %ld\n", sum);
}

