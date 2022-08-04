#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int arr[1000][1000];
    cin >> m;
    cin >> n;

    // Take Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Print column wise sum
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}
