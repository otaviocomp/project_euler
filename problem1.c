#include <stdio.h>

int main()
{
	int sum;
	int i;
	for(i = 0; i < 1000; i++)
		if(i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	printf("result = %d\n", sum);
}
