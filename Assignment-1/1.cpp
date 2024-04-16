#include <iostream>
#include <limits>

using namespace std;

void findSaddlePoint(int matrix[3][3], int rows, int cols)
{
    int minIndex;

    for (int i = 0; i < rows; i++)
    {
        // Find the minimum element in the current row
        minIndex = 0;
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] < matrix[i][minIndex])
            {
                minIndex = j;
            }
        }

        // Check if the minimum element in the current row is the maximum in its column
        bool isSaddlePoint = true;
        for (int j = 0; j < rows; j++)
        {
            if (matrix[j][minIndex] > matrix[i][minIndex])
            {
                isSaddlePoint = false;
                break;
            }
        }

        // Print the saddle point if found
        if (isSaddlePoint)
        {
            cout << "Saddle point found at row " << i + 1 << ", column " << minIndex + 1 << " with value " << matrix[i][minIndex] << endl;
            return;
        }
    }

    // If no saddle point is found, print a message
    cout << "No saddle point found in the matrix" << endl;
}

int main()
{
    // Sample matrix with saddle point at row 1, col 1 (change values as needed)
    int matrix[3][3] = {
        {10, 5, 7},
        {8, 3, // Saddle point
         12},
        {9, 6, 11}};

    int rows = 3;
    int cols = 3;

    findSaddlePoint(matrix, rows, cols);

    return 0;
}
