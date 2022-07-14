#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }

        int star = 1;
        while (star <= i)
        {
            cout << "*";
            star++;
        }
        cout << endl;
        i++;
    }
}