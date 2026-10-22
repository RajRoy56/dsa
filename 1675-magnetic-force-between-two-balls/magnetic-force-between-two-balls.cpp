class Solution {
public:
    int countballs(int mid,int n,vector<int>&positon){
        int count=1,index=0;
        for(int i=0;i<n;i++){
            if(positon[index]+mid<=positon[i]){

            count++;
            index=i;
            }
        }
        return count;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size(),ans=0;
        sort(position.begin(),position.end());
        int start=1,end=position[n-1]-position[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=countballs(mid,n,position);
            if(count<m){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }  
        }
        return ans;
    }
};