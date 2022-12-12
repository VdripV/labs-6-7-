#include "sortFOO.hpp"
#include <iostream>

namespace drobV
{
	int sortFOO(int numStr, int row, int column, int arr[100][100])
	{
		for (int i = 0; i < row; i++)
		{
			int count = 0;

			for (int j = 0; j < column - 1; j++)
			{
				if (arr[i][j] == 8)
					count++;
			}

			if (i == numStr)
				return count;
		}
	}

	void sortFOO(int row, int column, int arr[100][100])
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column - 1; j++)
			{
				if (drobV::sortFOO(i, row, column, arr) > 0)
				{
					if (arr[i][j] > arr[i][j + 1])
						std::swap(arr[i][j], arr[i][j + 1]);
				} 
			}
		}
	}
}
