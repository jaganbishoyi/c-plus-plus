#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum_even = 0;
    int sum_odd = 0;

    while (n != 0)
    {
        int temp = n / 10;
        int last_digit = n % 10;

        if (last_digit % 2 == 0)
        {
            sum_even = sum_even + last_digit;
        }
        else
        {
            sum_odd = sum_odd + last_digit;
        }

        n = temp;
    }

    cout << sum_even << " " << sum_odd << endl;
}
