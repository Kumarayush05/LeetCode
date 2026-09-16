class Solution {
public:
    int reverse(int n) {
        int ld;
        int rev = 0;

        while(n != 0){
            ld = n % 10;

            
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && ld > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && ld < -8)) return 0;

            rev = (rev * 10) + ld;
            n = n / 10;
        }

        return rev;
    }
};