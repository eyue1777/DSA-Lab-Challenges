#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Hash table to store {value, index}

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the required pair value
            
            // If complement exists in the hash table, return the pair of indices
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Found solution
            }
            
            // Store the current number and its index in the hash table
            numMap[nums[i]] = i;
        }
    return {};  // return value if no vector is found
    }
};

// Driver code for testing
int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 17;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Test Case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 7;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Output: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Test Case 3
    vector<int> nums3 = {5, 3};
    int target3 = 8;
    vector<int> result3 = solution.twoSum(nums3, target3);
    cout << "Output: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}


