#include <stdio.h>

int main()
{
	int count = 6;
	int prime = 13;
	int i;
	int flag;
	while(count != 10001)
	{
		prime = prime + 2;
		flag = 1;
		for(i = 3; i < prime; i = i + 2)
			if(prime % i == 0)
			{
				flag = 0;
				break;
			}
		if(flag == 1)
			count++;
	}
	printf("result = %d\n", prime);
}
