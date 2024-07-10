class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        int start = 0, end = 0;
        std::unordered_set<char> charSet;

        while (end < n) {
            if (charSet.find(s[end]) == charSet.end()) {
                charSet.insert(s[end]);
                maxLength = std::max(maxLength, end - start + 1);
                end++;
            } else {
                charSet.erase(s[start]);
                start++;
            }
        }

        return maxLength;
    }
};