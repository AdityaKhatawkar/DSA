/*
          1   
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1 
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int spaces = n-i;
        while(spaces){
            cout << " ";
            spaces--;
        }

        for (int j = 1; j <= i ; j++)
        {
            cout  << j;
        }

        for(int k = 1; k < i ; k++){
            cout << k;
        }

        cout << endl;
    }
    return 0;
}