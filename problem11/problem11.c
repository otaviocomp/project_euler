#include <stdio.h>

int main()
{
	int i, j, a[20][20], tmp, result;
	FILE *file;
	file = fopen("grid.txt", "r");
	for(i = 0; i < 20; i++)
		for(j = 0; j < 20; j++)
			fscanf(file, "%d", &a[i][j]);
	fclose(file);
	for(i = 0; i < 20; i++)
		for(j = 0; j < 20; j++)
		{
			if(i - 3 > 0)
			{
				tmp = a[i][j]*a[i - 1][j]*a[i - 2][j]*a[i - 3][j];
				if(tmp > result)
					result = tmp;
			}
			if(j + 3 < 20)
			{
				tmp = a[i][j]*a[i][j + 1]*a[i][j + 2]*a[i][j + 3];
				if(tmp > result)
					result = tmp;
			}
			if(i + 3 < 20)
			{
				tmp = a[i][j]*a[i + 1][j]*a[i + 2][j]*a[i + 3][j];
				if(tmp > result)
					result = tmp;
			}
			if(j - 3 > 0)
			{
				tmp = a[i][j]*a[i][j - 1]*a[i][j - 2]*a[i][j - 3];
				if(tmp > result)
					result = tmp;
			}
			if(i - 3 > 0 && j + 3 < 20)
			{
				tmp = a[i][j]*a[i - 1][j + 1]*a[i - 2][j + 2]*a[i - 3][j + 3];
				if(tmp > result)
					result = tmp;
			}
			if(i + 3 < 20 && j + 3 < 20)
			{
				tmp = a[i][j]*a[i + 1][j + 1]*a[i + 2][j + 2]*a[i + 3][j + 3];
				if(tmp > result)
					result = tmp;
			}
			if(i + 3 < 20 && j - 3 > 0)
			{
				tmp = a[i][j]*a[i + 1][j - 1]*a[i + 2][j - 2]*a[i + 3][j - 3];
				if(tmp > result)
					result = tmp;
			}
			if(i - 3 > 0 && j - 3 > 0)
			{
				tmp = a[i][j]*a[i - 1][j - 1]*a[i - 2][j - 2]*a[i - 3][j - 3];
				if(tmp > result)
					result = tmp;
			}
		}
	printf("result = %d\n", result);	
}
