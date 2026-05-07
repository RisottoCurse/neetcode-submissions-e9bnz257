class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        std::unordered_set<char> charS;

        int l{0};
        int result{0};

        for (int r = 0; r < s.size(); r++) {

            // if s[r] is in charS
            while (charS.find(s[r]) != charS.end()) {
                charS.erase(s[l]);
                l++;
            }
            
            charS.insert(s[r]);
            result = max(result, r - l + 1);
        }

        return result;  
         
    }
};
