#include <iostream>
using namespace std;
void reversesArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int *input, int d, int n)
{
    // SOLUTION - 1
    // int i = 0;
    // while (i < d)
    // {
    //     int temp = input[0];
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j == n - 1)
    //         {
    //             input[j] = temp;
    //         }
    //         else
    //         {
    //             input[j] = input[j + 1];
    //         }
    //     }
    //     i++;
    // }

    // SOLUTION - 2
    // int i = 0;
    // int temp[100000];
    // while (i < d)
    // {
    //     temp[i] = input[i];
    //     i++;
    // }

    // for (int j = 0; j < n; j++)
    // {
    //     input[j] = input[j + d];
    // }

    // i = 0;
    // while (i < d)
    // {
    //     input[n - d + i] = temp[i];
    //     i++;
    // }

    // SOLUTION - 3

    reversesArray(input, 0, n - 1);
    reversesArray(input, 0, n - d - 1);
    reversesArray(input, n - d, n - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}