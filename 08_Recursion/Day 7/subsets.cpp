// https://leetcode.com/problems/subsets/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(output); //is index has reached the end, push the current output into the ans
            return;
        }

        // Exclusion
        solve(nums, output, index + 1, ans); //exclude the current element

        // Inclusion
        int element = nums[index];
        output.push_back(element); //include the cur element into output
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3}; // Example input
    vector<vector<int>> result = sol.subsets(nums);

    cout << "Subsets are:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (const auto& num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}


//BIT MANIP


// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> result;
//         int n = nums.size();
//         for (int i = 0; i < (1 << n); i++) {
//             vector<int> subset;
//             for (int j = 0; j < n; j++) {
//                 if ((i & (1 << j)) > 0) {
//                     subset.push_back(nums[j]);
//                 }
//             }
//             result.push_back(subset);
//         }
//         return result;
//     }
// };