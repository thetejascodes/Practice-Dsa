#include <iostream>
using namespace std;

int main()
{
    int n = 4, spaces;
    for (int i = 1; i <= n; i++)
    {
        spaces = n - i;
        for (int r = 1; r <= spaces; r++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {

            cout << "*";
        }
        cout << '\n';
    }
}