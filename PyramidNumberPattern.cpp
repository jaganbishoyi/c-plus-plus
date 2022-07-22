#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }

        int num = i;
        while (num > 0)
        {
            cout << num;
            num--;
        }

        int num2 = 2;
        while (num2 <= i)
        {
            cout << num2;
            num2++;
        }
        cout << endl;
        i++;
    }
}