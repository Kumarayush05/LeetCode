class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        long long num = x;
        while(x>0){
            long digit = x%10;
            rev = (rev*10)+digit;
            x = x/10;
        }
        if(rev==num){
            return true;
        }else{
            return false;
        }
    }
};