class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int x = -1;
        int y = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) x = i;
            if (nums[i] == n) y = i;
        }

        int swaps = x + (n - 1 - y);

        if (x > y) {
            swaps--;
        }

        return swaps;
    }
};