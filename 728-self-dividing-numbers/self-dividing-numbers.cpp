class Solution {
public:
    bool countDigits(int num) {
        int temp=num,count=0,n=0;
        while(temp){
            int a=temp%10;
            if(a==0){
                return false;
            }
            if(num%a==0){
                count++;
            }
            temp=temp/10;
            n++;

        }
        return count==n;
        
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(countDigits(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};