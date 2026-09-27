#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i <= n; i++)
    {
        for (int r = 0; r < i; r++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
