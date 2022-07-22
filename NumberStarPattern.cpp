#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int num1 = 1;
        while (num1 <= n - i)
        {
            cout << num1;
            num1++;
        }

        int star1 = 0;
        while (star1 <= i - 1)
        {
            cout << "*";
            star1++;
        }

        int star2 = 1;
        while (star2 <= i)
        {
            cout << "*";
            star2++;
        }

        int num2 = n - i;
        while (num2 > 0)
        {
            cout << num2;
            num2--;
        }

        cout << endl;
        i++;
    }
}