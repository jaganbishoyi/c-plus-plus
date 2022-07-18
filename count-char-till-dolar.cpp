#include <iostream>
using namespace std;

int main()
{
    int c;
    c = cin.get();
    int count_of_characters = 0, count_of_digits = 0, count_of_whitespaces = 0;
    while (c != '$')
    {
        if (c >= 97 && c <= 122)
        {
            count_of_characters++;
        }
        if (c == '\t' || c == '\n' || c == ' ')
        {
            count_of_whitespaces++;
        }
        if (c >= 48 && c <= 57)
        {
            count_of_digits++;
        }

        c = cin.get();
    }

    cout << count_of_characters << " " << count_of_digits << " " << count_of_whitespaces << endl;
}