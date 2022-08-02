#include <iostream>
using namespace std;
int getLength(char input[])
{
    int length = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void reverseStringWordWise(char input[])
{
    int length = getLength(input);
    int i = 0;
    int j = length - 1;
    // Reverse the whole sentence
    while (i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }

    cout << input << endl;

    // Reverse the character in words
    int k = 0;
    int start = 0;
    int end = 0;
    for (int k = 0; k <= length; k++)
    {
        if (input[k] == ' ' || input[k] == '\0')
        {
            end = k - 1;
            while (start < end)
            {
                char temp = input[start];
                input[start] = input[end];
                input[end] = temp;
                start++;
                end--;
            }

            start = k + 1;
        }
    }
}

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
