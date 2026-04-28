class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // if we use a map/set and store the elements it will sort them automatically
        // then we iterate through
        // store all consecutive arrays and then do a size compare
        // return the longest array

        unordered_set<int> numSet(nums.begin(), nums.end());
        
        int longest = 0;

        for (const auto& num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {

                int length = 1;
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
        
    }
};
