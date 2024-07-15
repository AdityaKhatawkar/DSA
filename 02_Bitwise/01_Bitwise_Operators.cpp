#include<iostream>
using namespace std;


int main() {

    int a = 4;
    int b = 6;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b " << (a|b) << endl;
    cout<<" ~a " << ~a << endl; //If the first bit is set, the number is negative, flipping it will also flip the sign.
    cout<<" a^b " << (a^b) << endl;

    cout<< (17>>1)<<endl;  // 17 / 2
    cout<< (17>>2) <<endl; // 17 / (2*2)
    cout<< (19<<1) <<endl; // 19 * 2
    cout<< (21<<2) <<endl; // 21 * (2*2)

    int i = 7;

    cout<< (++i) <<endl;
    // 8 
    cout<< (i++) <<endl;
    // 8 , i = 9
    cout<< (i--) <<endl;
    //9 , i = 8 
    cout<< (--i) <<endl; 
    // 7, i =7
    return 0;
}