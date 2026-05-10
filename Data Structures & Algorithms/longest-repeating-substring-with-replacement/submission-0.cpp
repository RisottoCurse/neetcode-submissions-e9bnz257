class Solution {
public:
    int characterReplacement(string s, int k) {

        int l{0};
        int res{0};
        int maxfreq{0};
        unordered_map<char, int> map; 

        for(int r = 0; r < s.size(); r++) {
            map[s[r]]++; // adding each letter with their count into map 
            maxfreq = max(maxfreq, map[s[r]]);

            while (r-l+1 - maxfreq > k) {
                map[s[l]]--;
                l++;
            }

            res = max(res, r-l+1);
        }

        return res;
        
    }
};
