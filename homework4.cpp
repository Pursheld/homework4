#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int sum = 0;
    int index;
    const int N = 3;
    const int size = 2;
    int array[size][size] = { {1,2},{1,2} };
    
    int arr[N][N] = { {1,2,3} , {1,2,3} };

    time_t now = time(0);
    tm* ltm = localtime(&now);
    int day = ltm->tm_mday;

   

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
    for (int i = 0; i < N; i++)
    {

        index = day % N;
        sum += arr[i][index];


    }
    cout << sum;
    std::cout << std::endl;
}