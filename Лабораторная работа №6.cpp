#include <iostream>
#include "readFOO.hpp"
#include "coutFOO.hpp"
#include "findFOO.hpp"
#include "sortFOO.hpp"


int main()
{
    int arr[100][100], i, j;

    setlocale(LC_ALL, "");
    std::cout <<("Задайте порядок матрицы через пробел: ");
    scanf_s("%d %d", &i, &j);
    std::cout <<("Введите матрицу поэлементно: ");
    drobV::readFOO(i, j, arr);
     
    if (drobV::findFOO(i, j, arr) == 0)
        drobV::sortFOO(i, j, arr);
     
    drobV::coutFOO(i, j, arr);
    
}
