#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (x == 1 || n == 1)
    {
        return x;
    }

    double ans = 1;

    long long int a = abs(n);

    if (n < 0)
    {
        if (a % 2 == 0)
        {
            ans = 1 / myPow(x * x, a / 2);
        }
        else
        {
            ans = 1 / (x * myPow(x, a - 1));
        }
    }
    else
    {
        if (a % 2 == 0)
        {
            ans = myPow(x * x, a / 2);
        }
        else
        {
            ans = x * myPow(x, a - 1);
        }
    }

    return ans;
}

int main()
{
    double x;
    int n;

    cin >> x;
    cin >> n;

    cout << myPow(x, n);
}