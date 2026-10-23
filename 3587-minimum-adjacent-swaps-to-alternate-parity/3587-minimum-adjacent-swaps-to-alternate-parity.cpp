
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int> even, odd;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        if (abs((int)even.size() - (int)odd.size()) > 1)
            return -1;

        auto calc = [&](vector<int>& pos) {
            int swaps = 0;
            for (int i = 0; i < nums.size(); i += 2) {
                swaps += abs(pos[i / 2] - i);
            }
            return swaps;
        };

        if (even.size() > odd.size())
            return calc(even);

        if (odd.size() > even.size())
            return calc(odd);

        return min(calc(even), calc(odd));
    }
};
