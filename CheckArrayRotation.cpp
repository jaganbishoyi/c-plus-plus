#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        count++;

        if (input[i] > input[i + 1])
        {
            break;
        }
    }

    if (count == size)
    {
        return 0;
    }

    return count;
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

        cout << arrayRotateCheck(input, size) << endl;
        delete[] input;
    }

    return 0;
}