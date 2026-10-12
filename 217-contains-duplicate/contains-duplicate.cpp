class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;

        for(auto val : nums){
             mpp[val]++;
            if(mpp[val] >= 2){
                return true;
            }
           
        }
        return false;
        
    }
};