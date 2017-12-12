#include <stdio.h>

int main()
{
	int i;
	int j;
	long int product = 1;
	long int greatest = 1;
	int number[1000];
	FILE *file;
	file = fopen("number.txt", "r");
	for(i = 0; i < 1000; i++)
		fscanf(file, "%d", &number[i]);	
	fclose(file);
	for(i = 0; i < 988; i++)
	{
		for(j = 0; j < 13; j++)
			product = number[j + i]*product;
		if(product > greatest)
			greatest = product;
		product = 1;
	}
	printf("result = %d\n", greatest);
}
