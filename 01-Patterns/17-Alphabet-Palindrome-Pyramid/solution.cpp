#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n = 5, space;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        space = n - i;
        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        ch--;
        ch--;

        for (int j = i - 1; j >= 1; j--)
        {
            cout << ch;
            ch--;
        }

        cout << '\n';
    }
    return 0;
}