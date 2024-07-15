/*
    * * * *
      * * *
        * *
          *
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
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout  <<"*";
        }
        cout << endl;
    }
    return 0;
}