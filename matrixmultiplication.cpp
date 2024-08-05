#include <iostream>
using namespace std;

void inputMatrix(int mat[3][3], const string &matName) 
{
    cout << "Please enter the elements for matrix " << matName << ":\n";
    int row = 0, col = 0;
    while (row < 3) 
    {
        col = 0;
        while (col < 3) 
        {
            cin >> mat[row][col];
            col++;
        }
        row++;
    }
}

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int res[3][3]) 
{
    int i = 0, j = 0, k = 0;
    while (i < 3) 
    {
        j = 0;
        while (j < 3) 
        {
            res[i][j] = 0;
            k = 0;
            while (k < 3) 
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }
}

void printMatrix(int mat[3][3], const string &matName) 
{
    cout << "Displaying matrix " << matName << ":\n";
    int row = 0, col = 0;
    while (row < 3) 
    {
        col = 0;
        while (col < 3) 
        {
            cout << mat[row][col] << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

int main() 
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    inputMatrix(matrix1, "X");
    inputMatrix(matrix2, "Y");

    multiplyMatrices(matrix1, matrix2, result);

    printMatrix(matrix1, "X");
    printMatrix(matrix2, "Y");
    printMatrix(result, "Product");

    return 0;
}
