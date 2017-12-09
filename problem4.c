#include <stdio.h>

int is_palindrome(int x);

int main()
{
	int a = 999;
	int b = 999;
	int flag = 0;
	while(flag == 0)
	{
		flag = is_palindrome(a*b);
		b--;
	}
	printf("result = %d\n", a*b);
}

int is_palindrome(int x)
{
	int i;
	int digits  = 0;
	int n;
	int d = 1;
	// get the number of digits
	while(x/d != 0)
	{
		digits++;
		d = d*10;
	}
	// storage the digits in a array
	int v[digits];
	for(i = 0; i < digits; i++)
	{
		d = d/10;
		v[i] = x/d;
		x = x - v[i]*d;
	} 
	// check if it is a palindrome
	for(i = 0; i < digits/2; i++)
		if(v[i] != v[digits - i - 1])
			return 0;
	return 1;		
}
