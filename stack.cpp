#include <iostream>
#include <stdlib.h>
using namespace std;
#define size 100
int arr[size];
int t = -1;
void push1(int a)
{
    if (t == size)
    {
        cout << "stack is full";
    }
    else
    {
        t++;
        arr[t] = a;
    }
}
void pop1()
{
    if (t == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "element that is poped" << arr[t] << endl;
        t--;
    }
}
void display()
{
    for (int i = t; i > -1; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    while (1)
    {
        int c;
        cout << "1:push\n2:pop\n3:display\n4:exit" << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            int temp;
            cout << "enter a element";
            cin >> temp;
            push1(temp);
            break;
        case 2:
            pop1();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "wrong choice";
        }
    }
    return 0;
}
