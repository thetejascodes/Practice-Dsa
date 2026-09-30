#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int stars = 1; stars <= i; stars++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int stars = 1; stars <= i; stars++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}