#include <stdio.h>

#define N 10000000

int main()
{
	int i;
	int j;
	long int divisors1 = 0;
	long int divisors2 = 0;
	int result = 0;
	for(i = 1; i < N - 1; i++)
	{
		printf("\ri = %d", i);
		for(j = 1; j <= i/2; j++)
			if(i % j == 0)
				divisors1++;
		for(j = 1; j <= (i + 1)/2; j++)
			if((i + 1) % j == 0)
				divisors2++;
		if(divisors1 == divisors2)
			result++;
		divisors1 = 0;
		divisors2 = 0;
	}
	printf("\nresult = %d\n", result);
}
