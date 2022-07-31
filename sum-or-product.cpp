#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;

    if (c == 1)
    {
        int sum = 0;
        int i = 1;
        while (i <= n)
        {
            sum = sum + i;
            i++;
        }

        cout << sum << endl;
    }
    else if (c == 2)
    {
        int product = 1;
        int i = 1;
        while (i <= n)
        {
            product = product * i;
            i++;
        }

        cout << product << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}