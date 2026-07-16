class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>temp(n+1,0);

        for(int i=0;i<n;i++){
            temp[nums[i]]++;
        }
        for(int i=1;i<n+1;i++){
            if(temp[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};