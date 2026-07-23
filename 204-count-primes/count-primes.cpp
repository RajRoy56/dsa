class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
    
        for(int i=2; i*i<n; i++){

            if(prime[i]==true){
        
                for (int p = i * i; p <= n; p += i) {
                  prime[p] = false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]==true){
                count++;
            }
        }
        return count;
    }
};