// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    void solve(string output, int index, string mapping[], vector<string> &ans, string digits) {
        // base case 
        if(index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0'; // to get the current number from the string and convert to int 
        string value = mapping[number]; 

        for(int i = 0; i < value.length(); i++) { // for all the characters in value
            output.push_back(value[i]); // push current value
            solve(output, index+1, mapping, ans, digits); // go to the next index
            output.pop_back(); // backtracking to remove the current character from value
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) {
            return ans;
        }
        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        solve(output, index, mapping, ans, digits);
        return ans;
    }
};

int main() {
    Solution sol;
    string digits;
    cout << "Enter digits: ";
    cin >> digits;

    vector<string> result = sol.letterCombinations(digits);

    cout << "Possible combinations are: ";
    for (const string &combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
