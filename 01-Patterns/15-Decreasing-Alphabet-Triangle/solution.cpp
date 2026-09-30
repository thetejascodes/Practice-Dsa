#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        ch = 'A';
        for (int j = i; j >= 1; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << '\n';
    }
    return 0;
}