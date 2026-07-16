class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();++it){
            if(it->second==2){
                ans.push_back(it->first);
            }

        }
        return ans;
    }
};