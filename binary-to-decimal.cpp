#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int dec = 0;
    int i = 0;
    while (n > 0)
    {
        int last = n % 10;
        dec = dec + last * pow(2, i);
        n = n / 10;
        i++;
    }

    cout << dec;
}