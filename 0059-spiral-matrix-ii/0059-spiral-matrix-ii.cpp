class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int srow = 0;
        int erow = n - 1;
        int scol = 0;
        int ecol = n - 1;
        int k= 1;
        while(srow <= erow && scol <= ecol){
    
            // Top row
            for(int i = scol; i <= ecol; i++){
                ans[srow][i]= k;
                k++;
            }
            srow++;

            // Right column
            for(int i = srow; i <= erow; i++){
                ans[i][ecol]= k;
                k++;
            }
            ecol--;

            // Bottom row
            if(srow <= erow){
                for(int i = ecol; i >= scol; i--){
                    ans[erow][i]= k;
                    k++;
                }
                erow--;
            }

            // Left column
            if(scol <= ecol){
                for(int i = erow; i >= srow; i--){
                    ans[i][scol]= k;
                    k++;
                }
                scol++;
            }
        }

        return ans;   
    }
};