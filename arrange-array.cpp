#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int value = 1;
    int startIdx = 0;
    int lastIdx = n - 1;
    while (value <= n)
    {
        arr[startIdx] = value;
        value++;
        startIdx++;

        if (startIdx < lastIdx)
        {
            arr[lastIdx] = value;
            value++;

            lastIdx--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}