#include "readFOO.hpp"
#include <iostream>

namespace drobV
{
	void readFOO(int row, int column, int arr[100][100])
	{
		for (int i = 0; i < row; i++)
			for (int j = 0; j < column; j++)
				std::cin >> arr[i][j];
	}
}
