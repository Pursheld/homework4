#include <iostream>

int main()
{
    
    const int size = 2;
    int array[size][size] = { {1,2},{5,3} };
    for (int i = 0; i < size; i++)
    {
        
        for (int j = 0 ; j < size; j++)
        {
            array[i][j] += array[j][i];
            
            std::cout << array[i][j];
            std::cout << " ";

        }
        std::cout << std::endl;
    }

}