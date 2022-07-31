#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    // int power = pow(x, n);
    // cout << power << endl;

    if (x == 0 && n == 0)
    {
        cout << 1;
    }
    else
    {
        int i = 1;
        int power = 1;
        while (i <= n)
        {
            power = power * x;
            i++;
        }

        cout << power << endl;
    }
}