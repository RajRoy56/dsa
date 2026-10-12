class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans(2,-1);
        for(int i=0;i<nums.size(); i++){
            int comp=target-nums[i];
            if(mpp.find(comp) != mpp.end()){
                ans[0]=i;
                ans[1]=mpp[comp];
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};