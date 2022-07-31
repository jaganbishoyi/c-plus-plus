#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}