#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = n; i >= 1; i--)
    {
        for (int r = 1; r <= i; r++)
        {
            cout << r;
        }
        cout << '\n';
    }
    return 0;
}