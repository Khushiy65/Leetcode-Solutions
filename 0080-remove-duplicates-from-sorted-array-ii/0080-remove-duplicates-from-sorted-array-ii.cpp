class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int >ans;
        for(int i=0; i<nums.size(); i++){
            if(ans.size() < 2 || ans[ans.size()-2] != nums[i]){
                ans.push_back(nums[i]);
            }
        }
         for(int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }
        return ans.size();
    }
};