#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAdjacentIncreasingSubarrays(const vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return 0; // No room for two adjacent subarrays

    vector<int> lengths(n, 1); // lengths[i] stores the length of the increasing subarray ending at index i

    // Step 1: Find the lengths of all increasing subarrays
    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            lengths[i] = lengths[i - 1] + 1;
        }
    }

    int maxK = 0;

    // Step 2: Check adjacent increasing subarrays
    for (int i = 1; i < n; i++) {
        if (lengths[i] > 1 && lengths[i - 1] > 1) {
            // lengths[i] is for subarray ending at index i, lengths[i-1] is for subarray ending at index i-1
            int k = min(lengths[i], lengths[i - 1]);
            if (i - k >= 0 && lengths[i - k] == k) {
                maxK = max(maxK, k);
            }
        }
    }

    return maxK;
}

int main() {
    vector<int> nums1 = {2, 5, 7, 8, 9, 2, 3, 4, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4, 4, 4, 4, 5, 6, 7};

    cout << "Example 1 Output: " << maxAdjacentIncreasingSubarrays(nums1) << endl; // Output: 3
    cout << "Example 2 Output: " << maxAdjacentIncreasingSubarrays(nums2) << endl; // Output: 2

    return 0;
}
