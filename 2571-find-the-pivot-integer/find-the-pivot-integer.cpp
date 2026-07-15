class Solution {
public:
    int pivotInteger(int n) {
        
           int a=1,b=3;
           int c=(n*(n+1)/2);
           
           double ans=sqrt(c);
           if(floor(ans)==ans){
             return ans;
           }
           
            return -1;
           
        
    }
};