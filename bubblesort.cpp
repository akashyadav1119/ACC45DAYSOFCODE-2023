#include <iostream>
using namespace std;
int main()
{
    int a, c = 0;
    cin >> a;
    // int arr[10]={87,23,6,23,6,71,86,24,75,62};
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                c = 1;
            }
        }
        if (c == 0)
        {
            break;
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
