#include <stdio.h>

int main()
{
	int number = 0, divisors = 0, i = 0, j;
	while(divisors < 501)
	{
		divisors = 0;
		i++;
		number = number + i;
		for(j = 1; j <= number; j++)
		{
			if(number % j == 0)
				divisors++;
		}
	}
	printf("number = %d\n", number);
}
