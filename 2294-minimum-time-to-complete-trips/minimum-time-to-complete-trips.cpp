class Solution {
public:
    long long counttrip(long long mid,int n, vector<int>&time,int totalTrips){
        long long count=0;
        for(int i=0;i<n;i++){
            count+=mid/time[i];
            if(count>totalTrips){
                return -1;
            }
        }
        return count;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long ans=0;
        int n=time.size();
        long long start=1,end= 1LL * (totalTrips)*(*min_element(time.begin(),time.end()));
        while(start<=end){
            long long mid= start+(end-start)/2;
            if(counttrip(mid,n,time,totalTrips)>=0){
                if(counttrip(mid,n,time,totalTrips)==totalTrips){
                    end=mid-1;
                    ans=mid;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                ans =mid;
                end=mid-1;
            }
        }
        return ans;
    }
};