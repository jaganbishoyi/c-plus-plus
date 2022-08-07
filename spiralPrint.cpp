#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int count = 0;
    int FR = 0;
    int LC = nCols - 1;
    int LR = nRows - 1;
    int FC = 0;

    while (count < (nRows * nCols))
    {
        // Print First row
        for (int i = FR; i <= LC && count < nRows * nCols; i++)
        {
            cout << input[FR][i] << " ";
            count++;
        }
        FR++;

        // Print last Column
        for (int i = FR; i <= LR && count < nRows * nCols; i++)
        {
            cout << input[i][LC] << " ";
            count++;
        }
        LC--;

        // Print Last Row
        for (int i = LC; i >= FC && count < nRows * nCols; i--)
        {
            cout << input[LR][i] << " ";
            count++;
        }
        LR--;

        // Print First Column
        for (int i = LR; i >= FR && count < nRows * nCols; i--)
        {
            cout << input[i][FC] << " ";
            count++;
        }
        FC++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}