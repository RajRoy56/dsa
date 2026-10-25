class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();

        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(nums[i]==INT_MIN){
                flag=true;
            }
        }
        for(int i=0;i<n;i++){
            max1=max(max1,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]==max1) continue;
            max2=max(max2,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]==max1 || nums[i]==max2) continue;
            max3=max(max3,nums[i]);
        }
        if(max2==INT_MIN) return max1;
        if(flag) return max3;
        if(max3==INT_MIN) return max1;
        
        return max3;
    }
};