#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *ptr = &n;
    // int *ptr = 0;
    // ptr = &n     //this is also valid
    cout << ptr << endl;
    cout << *ptr << endl;

    // copying a pointer
    int *q = ptr;
    cout << q << endl;
    cout << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    // cout <<  (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1; //doing this will not increment the address stored in pointer by 1, but by 4 if its an integer pointer.
    cout << " after t " << t << endl;

    return 0;
}