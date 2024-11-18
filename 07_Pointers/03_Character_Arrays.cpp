#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << arr << endl;
    //attention here
    cout << ch << endl; //will print entire content of array
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp; //when we try to do this for array, the string is first stored in a temporary location, and then stored in
    //our array location, if we do what we have done here, the pointer will point to that temporary location itself, so this 
    //is not supposed to be done.

    cout << p << endl;


    return 0;
}