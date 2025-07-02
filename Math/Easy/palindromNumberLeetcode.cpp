class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        if(x<0) {
            return false;
        } if(x==0) {
            return true;
        }

        long long reverse =0, digit;
        do {
            digit = x%10;
            reverse = (reverse *10) +digit;
            x = x/10;
        } while(x!=0);

        if(reverse == num ) {
            return true;
        }

        return false;

    }
};