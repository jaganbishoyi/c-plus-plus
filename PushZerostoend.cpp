#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int k = 0;
    int i = 0;
    while (i < size)
    {
        if (input[i] != 0)
        {
            int temp = input[k];
            input[k] = input[i];
            input[i] = temp;
            k++;
        }

        i++;
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

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        pushZeroesEnd(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}