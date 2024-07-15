/*
        1
        2 1
        3 2 1
        4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int count;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count = i;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }

    return 0;
}



// Approach 2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i - j + 1 << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }