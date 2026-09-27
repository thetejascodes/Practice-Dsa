#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int r = 1; r <= i; r++)
        {
            cout << r;
        }
        cout << '\n';
    }
    return 0;
}