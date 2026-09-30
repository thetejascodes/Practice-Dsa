#include <iostream>
using namespace std;

int main()
{
    int n = 5, value = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            value++;
        }
        cout << '\n';
    }
    return 0;
}