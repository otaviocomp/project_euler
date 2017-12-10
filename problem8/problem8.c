#include <stdio.h>

int main()
{
	int i;
	int j;
	int product = 1;
	int greatest = 1;
	int number[1000];
	FILE *file;
	file = fopen("number.txt", "r");
	for(i = 0; i < 1000; i++)
		fscanf(file, "%d", &number[i]);	
	fclose(file);
	printf("a = %d b = %d\n", number[9], number[50]);
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
