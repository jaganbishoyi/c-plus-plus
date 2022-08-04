#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    // Write your code here
    int max = 0;
    int maxIndex = 0;
    bool row = true;

    // Check max of rows
    for (int i = 0; i < nRows; i++)
    {
        int temp = 0;
        for (int j = 0; j < mCols; j++)
        {
            temp = temp + input[i][j];

            if (temp > max)
            {
                max = temp;
                maxIndex = i;
                row = true;
            }
        }
    }

    // Check max for columns
    for (int j = 0; j < mCols; j++)
    {
        int temp = 0;
        for (int i = 0; i < nRows; i++)
        {
            temp = temp + input[i][j];
            if (temp > max)
            {
                max = temp;
                maxIndex = j;
                row = false;
            }
        }
    }

    if (max == 0)
    {
        cout << "row " << 0 << " " << -2147483648;
    }
    else
    {
        if (row)
        {
            cout << "row " << maxIndex << " " << max;
        }
        else
        {
            cout << "column " << maxIndex << " " << max;
        }
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

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}
