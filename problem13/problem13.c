#include <stdio.h>

int main()
{
	int number[5000], i, sum = 0;
	FILE *file;
	file = fopen("number.txt", "r");
	for(i = 0; i < 5000; i++)
		fscanf(file, "%d", &number[i]);
	fclose(file);
	for(i = 0; i < 5000; i++)
		sum = sum + number[i];
	printf("result = %d\n", sum);
}

