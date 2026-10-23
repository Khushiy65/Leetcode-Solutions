class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int maxi = -1;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int count = 0;

            if (nums[i + 1] == nums[i] + 1) {
                count = 2;

                for (int j = i + 2; j < n; j++) {
                    if (nums[j] == nums[i] + (count % 2)) {
                        count++;
                    }
                    else {
                        break;
                    }
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};