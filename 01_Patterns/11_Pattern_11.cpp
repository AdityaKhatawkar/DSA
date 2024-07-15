/*
        A A A
        B B B
        C C C
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
        }
        cout << endl;
        c++;
    }

    return 0;
}


//Approach 2 
// int main()
// {
//     int n;
//     cin >> n;
//     char c = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
