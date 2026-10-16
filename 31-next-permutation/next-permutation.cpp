class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        // find the breaking point where the arr[i] is less then the next one from right
        //and store it in index
        for(int i=n-2 ;i>=0 ;i--){
            if(nums[i] < nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            //array is decreasing 
            reverse(nums.begin(),nums.end());
            return;
        }
        //now check for the smallest number greater than arr[index] as array is incereasing from behind 
        // so starch checking from right who is greater than arr[index]
        int i=n-1;
        for(i ; i>=0 ;i--){
            if(nums[i]>nums[index]){// once found swap it with arr index
                swap(nums[i],nums[index]);
                break;
            }
        } 
        // now we need to sort the elements after arr[i] as it is increasing even after swapping 
        //just reverse it to sort it
        reverse(nums.begin()+index+1, nums.end());
    }
};