#include <stdio.h>

int main()
{
	long int N = 600851475143;
	int flag = 1;
	int number = 3;
	int largest;
	int i;
	while(N != 1)
	{ 
		for(i = 3; i < number; i = i + 2)
			if(number % i == 0 && flag == 1)
				flag = 0;
		if(flag == 0 && N % number == 0)
			N = N/number;
		largest = number;
		number = number + 2;
	}
	printf("result = %ld\n", largest);
}



