#include <iostream>
using namespace std;

long pow(int x, int y)
{
    long power = 1;

    while (y > 0)
    {
        power = power * x;
        y--;
    }
    return power;
}

int main()
{
    int n;
    cin >> n;

    long ans = 0;
    int i = 0;
    while (n != 0)
    {
        int remainder = n % 2;
        ans = ans + remainder * pow(10, i);
        n = n / 2;
        i++;
    }

    cout << ans;
}