#include <iostream>
using namespace std;

int main()
{
    int n = 5, space;
    for (int i = 1; i <= n; i++)
    {

        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            space = n - 2;
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << '\n';
    }
    return 0;
}