#include <iostream>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    if (s[i] != s[j])
    {
        return false;
    }
    else if (i >= j)
    {
        return true;
    }
    else
    {
        i++;
        j--;
        return isPalindrome(s, i, j);
    }
}

int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s, 0, s.length() - 1))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}