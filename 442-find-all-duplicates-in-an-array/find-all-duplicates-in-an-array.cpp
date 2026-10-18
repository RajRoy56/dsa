class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0 ;i<n ;i++){
            int num=abs(nums[i]);
            int index= num-1;
            if(nums[index]<0){
                ans.push_back(num);
            }else{
                nums[index] *= -1;
            }
        }
        return ans;
    }
};