class Solution {
public:
    int countDigits(int num) {
        int temp=num,count=0;
        while(temp){
            int a=temp%10;
            if(num%a==0){
                count++;
            }
            temp=temp/10;

        }
        return count;
        
    }
};