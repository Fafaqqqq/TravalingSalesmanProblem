#include "routes.h"
#include <stddef.h>

routes* CreateRoutes(const int** src, int src_row, int src_col)
{
	int** routes_matrix = (int**)malloc(src_row * sizeof(int*));

	for (int i = 0; i < src_row; i++)
	{
		routes_matrix[i] = (int*)malloc(src_col * sizeof(int));
	}


	for (int i = 0; i < src_row; i++)
	{
		for (int j = 0; j < src_col; j++)
		{
			routes_matrix[i][j] = src[i][j];
		}
	}

	return NULL;
}

routes* RemoveRoute(const routes* mtx, int src, int dst)
{
	return NULL;
}

void DeleteRoutes(routes* mtx)
{
}
