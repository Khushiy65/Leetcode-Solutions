class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
      vector<int> ans;
        int m = grid.size();
        int n = grid[0].size();

        bool take = true;

        for(int i = 0; i < m; i++) {

            if(i % 2 == 0) {
                for(int j = 0; j < n; j++) {
                    if(take)
                        ans.push_back(grid[i][j]);

                    take = !take;
                }
            }
            else {
                for(int j = n-1; j >= 0; j--) {
                    if(take)
                        ans.push_back(grid[i][j]);

                    take = !take;
                }
            }
        }

        return ans;
    }
};