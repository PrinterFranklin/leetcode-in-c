#include <string.h>

static void dfs(char **grid, int row_size, int col_size, int row, int col)
{
	grid[row][col] = '0';

	if (col + 1 < col_size && grid[row][col + 1] == '1')
		dfs(grid, row_size, col_size, row, col + 1);
	if (row + 1 < row_size && grid[row + 1][col] == '1')
		dfs(grid, row_size, col_size, row + 1, col);
	if (row - 1 >= 0 && grid[row - 1][col] == '1')
		dfs(grid, row_size, col_size, row - 1, col);
	if (col - 1 >= 0 && grid[row][col - 1] == '1')
		dfs(grid, row_size, col_size, row, col - 1);

	return;		
}

int numIslands(char **grid, int gridSize, int *gridColSize)
{
	int i, j, count = 0;
	for (i = 0; i < gridSize; i++) {
		for (j = 0; j < gridColSize[0]; j++) {
			if (grid[i][j] == '1') {
				dfs(grid, gridSize, gridColSize[0], i, j);
				count++;
			}
		}
	}
	return count;
}
