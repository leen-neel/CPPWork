#include <iostream>

using namespace std;

void saddlePoint(int matrix[3][3], int rows, int cols)
{

    int minIndex;

    for (int i = 0; i < rows; i++)
    {

        minIndex = 0;

        for (int j = 0; j < cols; j++)
        {

            if (matrix[i][j] < matrix[i][minIndex])
            {
                minIndex = j;
            }
        }

        bool isSaddlePoint = true;
        for (int k = 0; k < rows; k++)
        {
            if (matrix[k][minIndex] > matrix[i][minIndex])
            {
                isSaddlePoint = false;
                break;
            }
        }

        if (isSaddlePoint)
        {
            cout << "Saddle is " << matrix[i][minIndex] << endl;
            return;
        }
    }

    cout << "No saddle point found in the matrix";
}

int main()
{
    int matrix[3][3] = {
        {10, 5, 7},
        {8, 3, // Saddle point
         12},
        {9, 6, 11}};

    saddlePoint(matrix, 3, 3);

    return 0;
}
