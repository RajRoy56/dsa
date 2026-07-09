class Solution {
public:
    int gcd(int x,int y){
        if(x==0 ){
            return y;
        }
        if(y==0){
            return x;
        }
       return gcd(y,x%y);
    }
    int findGCD(vector<int>& nums) {
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        return gcd(a,b);
    }
};