/*
        A 
        B C 
        C D E
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // char c = 'A' + i - 1;     //Alternative
        for (int j = 1; j <= i; j++)
        {
            char c = 'A' + i - 2 + j;
            cout << c << " ";
            //c++;
        }
        cout << endl;
    }

    return 0;
}