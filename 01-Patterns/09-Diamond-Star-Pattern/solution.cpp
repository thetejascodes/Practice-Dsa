#include <iostream>
using namespace std;

int main()
{
    int n = 5, space;
    for (int i = 1; i <= n; i++)
    {
        space = n - i;
        for (int r = 1; r <= space; r++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {

            cout << "*";
        }
        cout << '\n';
    }
    for (int i = n; i >= 1; i--)
    {
        space = n - i;
        for (int r = 1; r <= space; r++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}