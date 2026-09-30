#include <iostream>
using namespace std;

int main()
{
    int n = 5, value;
    for (int i = 1; i <= n; i++)
    {
        value = (i % 2 == 0) ? 0 : 1;
        for (int r = 1; r <= i; r++)
        {
            cout << value << " ";
            value = 1 - value;
        }
        cout << '\n';
    }
}