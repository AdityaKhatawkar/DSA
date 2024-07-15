/*
        A B C
        D E F
        G H I
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    char c = 'A';
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
        
    }

    return 0;
}