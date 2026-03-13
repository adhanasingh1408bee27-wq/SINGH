#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // 1. Sort the array to use the two-pointer technique
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];

        // 2. Iterate through each number as the first element of the triplet
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                // If we find the exact target, return it immediately
                if (currentSum == target) {
                    return currentSum;
                }

                // Update closestSum if currentSum is nearer to the target
                if (abs(target - currentSum) < abs(target - closestSum)) {
                    closestSum = currentSum;
                }

                // Move pointers based on whether currentSum is smaller or larger than target
                if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return closestSum;
    }
};
