#include "coutFOO.hpp"
#include <iostream>

namespace drobV
{
	void coutFOO(int row, int column, int arr[100][100])
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
				std::cout << arr[i][j] << "\t";
			std::cout << std::endl;
		}
	}
}