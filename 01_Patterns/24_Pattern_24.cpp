/*
    1 2 3 4
      2 3 4
        3 4
          4

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int spaces = i-1;
        while(spaces){
            cout << " ";
            spaces--;
        }
        for (int j = i; j <= n ; j++)
        {
            cout  << j;
        }
        cout << endl;
    }
    return 0;
}