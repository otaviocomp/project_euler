#include <stdio.h>

int main()
{
	int sum = 0;
	int a = 1;
	int b = 2;
	int tmp;
	while(b < 4000000)
	{
		if(b % 2 == 0)
			sum = sum + b;
		tmp = b;	
		b = a + b;
		a = tmp;
	}
	printf("result = %d\n", sum);
}
