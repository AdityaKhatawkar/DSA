/*
        A B C
        A B C
        A B C
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
        
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
//             char ch = 'A' + j - 1;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }