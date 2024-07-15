/*
        A B C
        B C D
        C D E

        i + j - 1 = 1
        i + j - 1 + 'A' - 1 = 1 + 'A' - 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c = i + j - 2 + 'A';
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}