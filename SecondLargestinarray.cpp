#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    int largest = -2147483648;
    int secondLargest = -2147483648;

    if (n <= 1)
    {
        return secondLargest;
    }

    for (int i = 0; i < n; i++)
    {
        if (largest < input[i])
        {
            secondLargest = largest;
            largest = input[i];
        }
        else
        {
            if (secondLargest < input[i] && largest != input[i])
            {
                secondLargest = input[i];
            }
        }
    }

    if (largest == secondLargest)
    {
        secondLargest = -2147483648;
    }

    return secondLargest;
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

        cout << findSecondLargest(input, size) << endl;

        delete[] input;
    }

    return 0;
}