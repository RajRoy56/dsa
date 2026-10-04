class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
     int n=nums.size();
     int max = * (max_element(nums.begin(), nums.end()));
     int start=1,end=max;
     int ans=0;
     while(start<=end ){
        int mid= start+(end-start)/2;
        int sum=0;
        for(int j=0;j<n;j++){

          sum+= ceil((double)nums[j]/mid); 

        }

        if(sum <= threshold){
            ans= mid;
            end=mid-1;

        }
        else if(sum>threshold){
            start= mid+1;
        }
     }
      return ans;
    }
};