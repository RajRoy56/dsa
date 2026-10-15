class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0 ; i < n-2 ; i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            
            int start=i+1,end=n-1;

            while(start < end){
                if(nums[start] + nums[end] == -1* nums[i]){
                    ans.push_back({nums[start],nums[end],nums[i]});

                    // Skip duplicate values for the second element
                    while (start < end && nums[start] == nums[start + 1]) start++;
                    // Skip duplicate values for the third element
                    while (start < end && nums[end] == nums[end - 1]) end--;

                    start++;
                    end--;
                }
                else if(nums[start] + nums[end] > -1 * nums[i] ){
                    end--;
                }
                else {
                    start++;
                }
            }
        }
        return ans;
    }
};