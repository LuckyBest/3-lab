// 2 task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>

using namespace std;

int neg_counter(int**, int, int);
int sum(int**, int, int);

int main()
{
    int N, M;
    
    cout << "Enter the width of the array...\n" << endl;
    cin >> N;
    cout << "\nEnter a height of the array...\n" << endl;
    cin >> M;
    
    int** matrix = new int* [N];

    for (size_t k = 0; k  < M; k++)
    {
         matrix[k] = new int [M];
    }    
    for (size_t i = 0; i < M; i++)
    {
        cout << "\n";
        for (size_t j = 0; j < N; j++)
        {
  
            matrix[i][j] = rand() % 100 - 90;
            cout << matrix[i][j] << ", ";
        }   
    }
    cout << "\n\nThe amount of negative elements in the line which contains '0' is "<< neg_counter(matrix, N, M);
    cout << "\n\nSum = " << sum(matrix, N, M);   
}
int neg_counter(int** arr, int n, int m) {

    int counter = 0;
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (arr[j][i] == 0) {
                
                for (size_t l = 0; l < n; l++)
                {
                        if (arr[j][l] < 0)
                            counter++;
                } 
            }
        }
    }
    return counter;
}
int sum(int** arr, int n, int m) {

    int sum = 0;

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (arr[j][i] > 0) {
                for (size_t k = 0; k < n; k++)
                {
                    for (size_t l = 0; l < m; l++)
                    {
                        sum = sum + abs(arr[l][k]);
                    }
                }
            }
        }
    }
    return sum;
}

