#include <iostream>

int main()
{
    const int size = 2;
    const int srange = 4;
    int array[size][srange];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < srange; j++)
        {

            array[i][j] = i + j;

        }

    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < srange; j++)
        {

            std::cout << array[i][j];

        }
        std::cout << '\n';
    }

}