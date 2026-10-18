class Solution {
public:
    bool checkap(vector<int>& temp){
        sort(temp.begin(),temp.end());
            for(int l=1 ; l < temp.size()-1 ; l++){
                if(temp[l]-temp[l-1]!=temp[l+1]-temp[l]){
                    return false;
                }
            }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int n=nums.size();
        int m= l.size();
        for(int i=0 ;i<m;i++){
            vector<int>temp;
            for(int j=l[i]; j<=r[i];j++){
                temp.push_back(nums[j]);                
            }   
            ans.push_back(checkap(temp));
        }
        return ans;
    }
};