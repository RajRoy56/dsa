class Solution {
public:
    vector<int> gentraterow(int row){

        vector<int>ansrow;
        long long ans=1;
        ansrow.push_back(1);
        
        for(int colm=1;colm<row;colm++){
            ans*=(row-colm);
            ans/=colm;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(gentraterow(i));
        }
        return ans;

    }
};