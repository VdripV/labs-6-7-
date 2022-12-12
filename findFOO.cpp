#include "coutFOO.hpp"
#include <iostream>

namespace drobV
{
	int findFOO(int row, int column, int arr[100][100])
	{
		int max = INT32_MIN, min = INT32_MAX, sum;

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (arr[i][j] > max)
					max = arr[i][j];
				if (arr[i][j] < min)
					min = arr[i][j];
			}
		}

		return sum = max + min;
	}
}