class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int maxcurrentsum=nums[0];
        int minsum=nums[0];
        int mincurrentsum=nums[0];
        
        int tsum=nums[0];
        for(int i=1 ;i<n;i++){
            //kadane's algo for max sum
            //either extend pervious subarray or start a new one
            maxcurrentsum=max(maxcurrentsum+nums[i],nums[i]);
            maxsum=max(maxsum,maxcurrentsum);
            //kadanes algo for min sum
            //either extend previosu subarray or start a new one
            mincurrentsum=min(mincurrentsum+nums[i],nums[i]);
            minsum=min(minsum,mincurrentsum);
            //total sum 
            tsum+=nums[i];
        }
        int maxcircularsum= tsum-minsum;
        if(maxcircularsum==0) return maxsum;
        
        return max(maxcircularsum,maxsum);
            
        

    }
};