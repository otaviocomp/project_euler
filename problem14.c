#include <stdio.h>

int main()
{
	long int n;
	long int x;
	long int terms;
	long int new_terms = 1;
	long int result;
	for(n = 2; n < 1000000; n++)
	{
		x = n;
		terms = 1;
		while(x != 1)
		{
			if(x % 2 == 0)
				x = x/2;
			else
				x = 3*x + 1;
			terms++;
		}
		if(terms >= new_terms)
		{
			new_terms = terms;
			result = n;
		}
		printf("n = %ld\n", n);
	}
	printf("terms = %ld result = %ld\n", new_terms, result);
}
