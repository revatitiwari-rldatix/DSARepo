class Solution {
public:
    int maxScore(string s) {
        int lc = 0, rc = 0 , max=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1') {
                rc++;
            }
        } 

         for(int i=0; i<s.size()-1; i++) { 
            if(s[i] == '0') lc++; 
            else if(s[i] == '1') rc--; 

            max = (lc+rc > max) ? lc+rc : max; 
         }

         return max;
    }
};