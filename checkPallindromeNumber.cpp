#include <iostream>
#include <cstring>

using namespace std;

bool checkPalindromeNumber(int n)
{
    int num = n;
    long reverse = 0;

    if (n < 0)
    {
        return false;
    }

    while (n != 0)
    {
        int reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n = n / 10;
    }

    if (reverse == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << (checkPalindromeNumber(n) ? "true" : "false");
}