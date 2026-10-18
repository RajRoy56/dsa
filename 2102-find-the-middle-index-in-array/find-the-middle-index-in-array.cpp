class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
    
        int leftsum=0,tsum=0;
        for(int i=0;i<n;i++){
            tsum +=nums[i];
        }
        int rightsum=tsum;

        if(0==tsum-nums[0]) return 0;

        for(int i=1 ;i<n;i++){

            leftsum+=nums[i-1];
            rightsum= tsum-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            
        }
        return ans;
    }
};