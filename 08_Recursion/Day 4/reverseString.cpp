#include<iostream>
using namespace std;

void reverseString(string &s, int i, int j){
    if(i >= j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverseString(s,i,j);
}


int main()
{
    string s;
    cin >> s;
    reverseString(s,0,s.length()-1);
    cout << s << endl;     
    return 0;
}


//Using single pointer

// #include<iostream>
// using namespace std;

// void reverseString(string &s, int i){
//     int j = s.length() - 1 - i;  // Calculate the corresponding index from the end
//     if(i >= j){
//         return;
//     }
//     swap(s[i], s[j]);
//     reverseString(s, i + 1);  // Move to the next character from the start
// }

// int main()
// {
//     string s;
//     cin >> s;
//     reverseString(s, 0);
//     cout << s << endl;     
//     return 0;
// }
