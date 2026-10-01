#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A' + (n - i);
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << '\n';
    }
    return 0;
}