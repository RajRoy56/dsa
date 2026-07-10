class Solution {
public:
    
    bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false; // Skip multiples of 2 and 3

    // Check factors up to the square root of n
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
    bool isThree(int n) {
        double a=sqrt(n);
        if(floor(a)==a){
            long long x=a;
          return isPrime(a);
        }
        else{
            return false;
        }
    }
};