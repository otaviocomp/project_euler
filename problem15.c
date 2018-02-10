#include <stdio.h>

#define N 21

int main()
{
	long int grid[N][N], i, j;
	for(i = 0; i < N; i++)
	{
		grid[N - 1][i] = 1;
		grid[i][N - 1] = 1;
	}
	for(i = N - 2; i >= 0; i--) 
	{
		for(j = N - 2; j > i; j--)
		{
			grid[i][j] = grid[i + 1][j] + grid[i][j + 1];
			grid[j][i] = grid[i + 1][j] + grid[i][j + 1];
		}	
		grid[i][j] = grid[i + 1][i] + grid[i][i + 1];	
	}
	printf("result = %ld\n", grid[0][0]);
}
