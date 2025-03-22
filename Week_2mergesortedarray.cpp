#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1;       // Pointer for the last valid element in nums1
    int j = n - 1;       // Pointer for the last element in nums2
    int k = m + n - 1;   // Pointer for the last position in nums1 (merging in-place)

    // Merge from the end to avoid overwriting elements in nums1
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];  // Place the larger element at the end
            i--; // Move left in nums1
        } else {
            nums1[k] = nums2[j];  // Place nums2's element at the end
            j--; // Move left in nums2
        }
        k--; // Move left in merged array
    }

    // If nums2 still has elements left, copy them to nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 has extra space
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    // Print merged array
    for (int num : nums1) {
        std::cout << num << " ";
    }
    return 0;
}
