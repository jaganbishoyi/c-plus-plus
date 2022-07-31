#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        for (int j = n - i; j <= n; j++)
        {
            cout << j << " ";
        }

        for (int k = 0; k < n - 1 - i; k++)
        {
            cout << n << " ";
        }
        cout << endl;
        i++;
    }
}