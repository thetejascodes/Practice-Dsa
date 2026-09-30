#include <iostream>
using namespace std;

int main()
{
    int n = 5, space;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        space = 2 * (n - i);
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << '\n';
    }
    return 0;
}