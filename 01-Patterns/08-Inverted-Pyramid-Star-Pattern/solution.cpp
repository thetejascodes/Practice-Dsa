#include <iostream>
using namespace std;

int main()
{
    int n = 6, spaces;

    for (int i = 1; i <= n; i++)
    {
        spaces = i - 1;
        for (int r = 0; r <= spaces; r++)
        {
            cout << " ";
        }
        for (int stars = 2 * n - 2 * i + 1;stars>=1;stars--){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}