class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long b=0;b*b<=c;b++){
            double a=sqrt(c-(b*b));
            if(floor(a)==a){
                return true;
            }

        }
        return false;
    }
};