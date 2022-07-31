#include <iostream>
using namespace std;
void bubbleSort(int *input, int size)
{
    // 1
    // 7
    // 2 13 4 1 3 6 28
    int end = size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < end - 1; j++)
        {
            if (input[j] > input[j + 1])
            {
                int temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
        end--;
    }
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

        bubbleSort(input, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }
}