#include <stdio.h>

int get_c(int x, int c);

int main()
{
	int a = 2;
	int b = 1;
	int c = 1;
	int change = c;
	int i;
	while(1)
	{
		a++;
		for(i = a + 1; i < 1000; i++) 
		{
			printf("a = %d b = %d c = %d soma = %d\n", a, b, c, a+b+c);
			c = get_c(a*a + i*i, c);
			if(change != c)
			{
				change = c;
				b = i;
			}
			if(a + b + c == 1000)
				break;
		}
		if(a + b + c == 1000)
			break;
	}
	printf("a = %d b = %d c = %d soma = %d result = %d\n", a, b, c, a+b+c, a*b*c);
}

int get_c(int x, int c)
{
	int y = x;
	int i;
	int flag = 0;
	for(i = 1; i < x; i++)
	{
		if(x % i == 0)
		{
			y = x/i;
			if(y == i)
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag == 1)
		return y;
	else 
		return c;
}
