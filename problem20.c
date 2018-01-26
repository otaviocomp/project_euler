#include <stdio.h>

int main()
{
	int i, a[200], carry = 0, x, j = 0, m = 1;
	a[0] = 1;
	for(i = 1; i < 200; i++)
		a[i] = -1;	
	for(i = 2; i <= 9; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("m = %d", m);
			x = a[j]*i + carry;
			carry = x/10;
			a[j] = x % 10;
			printf("\tcarry = %d \ta[j] = %d\n", carry, a[j]);
		}
		if(carry > 0 && a[j] == -1)
		{
			a[j] = carry;
			m++;
		}
		carry = 0;
	}
	printf("result = ");
	for(i = m - 1; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");	
}	
