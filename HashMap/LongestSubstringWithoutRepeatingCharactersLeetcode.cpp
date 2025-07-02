class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;
        int left = 0, right = 0, maxLength = 0;

        while(right< s.size()) {
            if(seen.find(s[right]) != seen.end()) {
                left = max(left, seen[s[right]] + 1);
            }
            seen[s[right]] = right; 
            cout<< left<< " " << right << endl;
            maxLength = max(maxLength, right-left+1);
            right++;

        }
        return maxLength;
    }
};


//au 