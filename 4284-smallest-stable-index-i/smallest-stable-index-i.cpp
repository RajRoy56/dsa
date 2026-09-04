class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int minm=INT_MAX;
        int maxm=nums[0];
        vector<int>mini(n);
      
        for(int i=n-1;i>=0;i--){
            minm=min(minm,nums[i]);
            mini[i]=minm;
        }
        
        for(int i=0;i<n;i++){
            if(maxm < nums[i]){
                maxm = nums[i];
            }
            if(maxm-mini[i]<=k){
                return i;
            }
        }
        return -1;
    }
};