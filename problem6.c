#include <stdio.h>

int main()
{
	int sum_square = 0;
	int square_sum = 0;
	int i;
	for(i = 1; i <= 100; i++)
	{
		sum_square = i*i + sum_square;
		square_sum = square_sum + i;
	}
	square_sum = square_sum*square_sum;
	printf("result = %d\n", square_sum - sum_square);
}
