#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void solve(vector<vector<int>> &ans, int index, vector<int> nums) {
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++) { // Start from the current position
            swap(nums[index], nums[j]); // Swap the element in current position with every element in front of it
            solve(ans, index + 1, nums);
            swap(nums[index], nums[j]); // Backtrack to restore the original order
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(ans, index, nums);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums;

    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<vector<int>> permutations = solution.permute(nums);

    cout << "Permutations are:" << endl;
    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
