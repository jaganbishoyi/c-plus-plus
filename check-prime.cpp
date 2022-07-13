#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number" << endl;

    cin >> n;
    int i = 2;
    bool divided = false;
    while (i < n)
    {
        if (n % i == 2)
        {
            divided = true;
            break;
        }

        i = i + 1;
    }

    if (!divided)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}