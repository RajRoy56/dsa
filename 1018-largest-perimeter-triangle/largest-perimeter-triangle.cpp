class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       
        for(int i=n-1; i>=2 ;i--){
            int a=nums[i],b=nums[i-1],c=nums[i-2];
            if(b+c>a){ //as the nums is in ascendin ofere a+b>c and a+c>b is always true once check for b+c>a
            
                return a+b+c;
            }
            
        }
        return 0;
    }
};