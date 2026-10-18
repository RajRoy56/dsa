class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        int ans=n+1;
        bool flag1=false;
        //make out of bound and -ve as 1
        for(int i=0 ; i<n ;i++){
            if(nums[i]==1){
                flag1=true;
            }
            else if(nums[i] > n || nums[i] < 1){
                nums[i]=1;
            }
        }
        // if 1 is missing then it is the ans
        if(flag1 == false){
            return 1;
        }
        // make index as -1 to be considered as seen
        for(int i=0 ; i<n ;i++){
            int index= abs(nums[i])-1;
            if(nums[index]>0){
                nums[index] *=-1;
            }
        }
        for(int i=0 ; i<n ;i++){
            if(nums[i]>0){
                ans= i+1;
                break;
            }
        }
        return ans;
    }
};