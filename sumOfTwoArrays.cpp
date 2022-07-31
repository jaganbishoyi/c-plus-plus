#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int carry = 0;

    int opSize;
    if (size1 > size2)
    {
        opSize = size1 + 1;
    }
    else
    {
        opSize = size2 + 1;
    }

    while (opSize > 0)
    {
        int x = 0;
        int y = 0;

        if (size1 > 0)
        {
            x = input1[size1 - 1];
        }

        if (size2 > 0)
        {
            y = input2[size2 - 1];
        }

        int num = x + y + carry;
        if (num >= 10)
        {
            carry = num / 10;
            int value = num % 10;
            output[opSize - 1] = value;
        }
        else
        {
            output[opSize - 1] = num;
            carry = 0;
        }
        size1--;
        size2--;
        opSize--;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size1;
        cin >> size1;

        int *input1 = new int[size1];

        for (int i = 0; i < size1; ++i)
        {
            cin >> input1[i];
        }

        int size2;
        cin >> size2;

        int *input2 = new int[size2];

        for (int i = 0; i < size2; ++i)
        {
            cin >> input2[i];
        }

        int outsize = 1 + max(size1, size2);

        int *output = new int[outsize];

        sumOfTwoArrays(input1, size1, input2, size2, output);

        for (int i = 0; i < outsize; ++i)
        {
            cout << output[i] << " ";
        }

        delete[] input1;
        delete[] input2;
        delete[] output;
        cout << endl;
    }

    return 0;
}