#include <iostream>
using namespace std;
int binarySearch(int *input, int n, int val)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (val == input[mid])
        {
            return mid;
        }
        else if (val > input[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int val;
        cin >> val;
        cout << binarySearch(input, size, val) << endl;
    }

    delete[] input;
    return 0;
}