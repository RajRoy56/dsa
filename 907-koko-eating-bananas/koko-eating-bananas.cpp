class Solution {
public:
    long long counthr(vector<int> & piles, int mid){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            count+=  (piles[i] + mid - 1) / mid;

        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int end= *max_element(piles.begin(),piles.end()),ans=0;
        int start=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long count=counthr(piles,mid);
            if(count>h){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};