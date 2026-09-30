#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << '\n';
    }
    return 0;
}