#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if(isupper(ch)){
        cout << 1 << endl;
    }else if(islower(ch)){
        cout << 0 << endl;
    } else{
        cout << -1 << endl;
    }
}