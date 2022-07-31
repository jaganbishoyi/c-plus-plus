#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    // 	int ZCount = 0;
    //     int OCount = 0;
    //     int TCount = 0;

    //     for(int i=0; i < n; i++) {
    //         if(arr[i] == 1) {
    //             OCount++;
    //         }else if(arr[i] == 2){
    //             TCount++;
    //         } else{
    //             ZCount++;
    //         }
    //     }

    //     for(int i = 0; i <ZCount; i++){
    //         arr[i] = 0;
    //     }

    //     for(int i = 0; i <OCount; i++){
    //         arr[i + ZCount] = 1;
    //     }

    //     for(int i = 0 ; i <TCount; i++){
    //         arr[i + ZCount + OCount] = 2;
    //     }

    int i = 0, iz = 0, i2 = n - 1, temp;
    while (i <= i2)
    {
        if (arr[i] == 0)
        {
            // swap it with index of zeros
            temp = arr[i];
            arr[i] = arr[iz];
            arr[iz] = temp;
            iz++;
            i++;
        }
        else if (arr[i] == 2)
        {
            // swap it with index of 2s
            temp = arr[i];
            arr[i] = arr[i2];
            arr[i2] = temp;
            i2--;
        }
        else
            i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;

        cin >> size;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        sort012(arr, size);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
        cout << endl;
    }

    return 0;
}