#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000000];
    int sum = 0;
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }

    cout << sum << endl;
}