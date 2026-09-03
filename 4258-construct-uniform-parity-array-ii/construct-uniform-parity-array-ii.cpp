class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int n=arr.size();
        int num=INT_MAX;
        int odd=INT_MAX;
        int even=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]%2 ==1 && arr[i] < odd){
                odd=arr[i];
                continue;
            }
            if(arr[i] < even && arr[i]%2==0){
                even=arr[i];
            }
        }
        if(odd==INT_MAX)
            return true;
        if(even==INT_MAX)
            return true;
        if(odd<even){
            return true;
        }
        else
            return false;
        
    }
};