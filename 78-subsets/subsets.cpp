class Solution {
public:

 void subseq(vector<int>& nums,int n,int index,vector<int>temp,
        vector<vector<int>>&ans)
        {
            if(index==n){
                ans.push_back(temp);
                return;
            }
            //select
            subseq(nums,n,index+1,temp,ans);
            temp.push_back(nums[index]);
            //no select
            subseq(nums,n,index+1,temp,ans);

        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        subseq(nums,nums.size(),0,temp,ans);
       
        return ans;
    }
};