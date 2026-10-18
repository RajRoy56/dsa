class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>ans;
        unordered_map<int,vector<int>>mpp;

        for(int i=0; i<m ;i++){
            for(int j=0; j<n; j++){
                mpp[i+j].push_back(mat[i][j]);
            }
        }
        for (int d = 0; d < m + n - 1; d++) {
            // Diagonal elements naturally traverse downwards. 
            // reverse ONLY when the diagonal index is even to simulate moving upwards.
            if (d % 2 == 0) {
                reverse(mpp[d].begin(), mpp[d].end());
            }
            
            // Efficiently append the diagonal to your final answer
            ans.insert(ans.end(), mpp[d].begin(), mpp[d].end());
        }

        return ans;

    }
};