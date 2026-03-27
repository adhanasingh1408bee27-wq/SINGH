#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int jumps = 0;
        int current_end = 0;
        int farthest = 0;

        // Iterate through the array (except the last element)
        for (int i = 0; i < n - 1; ++i) {
            // Update the farthest point reachable from current index
            farthest = max(farthest, i + nums[i]);

            // If we've reached the end of the current jump's range
            if (i == current_end) {
                jumps++;
                current_end = farthest;
                
                // Optimization: if we can already reach the end, stop
                if (current_end >= n - 1) break;
            }
        }

        return jumps;
    }
};
