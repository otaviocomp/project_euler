#include <stdio.h>

int main()
{
	int number = 2520;
	int i;
	int flag;
	while(1)
	{
		flag = 1;
		for(i = 1; i <= 20; i++)
		{
			if(number % i != 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			printf("result = %d\n", number);
			break;
		}
		number = number + 2;
	}
}
