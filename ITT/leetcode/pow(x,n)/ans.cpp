class Solution {
public:
    double myPow(double x, int n) {
        // Use long long to handle INT_MIN (-2147483648) overflow
        long long N = n; 
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double ans = 1;
        double current_product = x;
        
        while (N > 0) {
            if (N % 2 == 1) {
                ans = ans * current_product;
            }
            current_product = current_product * current_product;
            N /= 2;
        }
        
        return ans;
    }
};
