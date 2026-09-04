class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int minm=INT_MAX;
        int maxm=INT_MIN;
        int maxi[n];
        vector<int>mini(n);
        
        for(int i=0;i<n;i++){
            maxm=max(maxm,nums[i]);
            maxi[i] = maxm;
        }
        for(int i=n-1;i>=0;i--){
            minm=min(minm,nums[i]);
            mini[i]=minm;
        }
        for(int i=0;i<n;i++){
            if(maxi[i]-mini[i]<=k){
                return i;
            }
        }
        return -1;
    }
};