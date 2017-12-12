#include <stdio.h>
#include <stdint.h>

int main()
{
	long double a = 1;
	long double b = 2;
	long double tmp;
	int index = 3;
	int digits;
	int d = 1;
	while(digits != 10.0)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		digits = 0;
		while(b/d != 0.0)
		{
			digits++;
			d = d*10.0;
		}
		index++;
		d = 1;
	}
}
