/*
          1   
        2 3 
      4 5 6
    7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        int spaces = n-i;
        while(spaces){
            cout << " ";
            spaces--;
        }
        for (int j = 1; j <= i ; j++)
        {
            cout  << start;
            start++;
        }
        cout << endl;
    }
    return 0;
}