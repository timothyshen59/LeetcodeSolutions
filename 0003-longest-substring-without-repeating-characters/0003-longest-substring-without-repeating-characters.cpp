class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n <= 1){
             return s.length();
        }

        int left = 0; 
        int right = 0; 
        int maxLength = 0;
        unordered_set<char> char_set; 
        while (right < n){
            if (char_set.find(s[right]) == char_set.end()){
                char_set.insert(s[right]);
                right++; 
                maxLength = max(right - left, maxLength);
            }

            else{
                char_set.erase(s[left]);
                left++;
            }
        }
        


        return maxLength;
    }
};