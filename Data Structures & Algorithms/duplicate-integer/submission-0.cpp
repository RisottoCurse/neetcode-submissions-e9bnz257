class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for(int num : nums) {
            if(seen.count(num)) { // .count() returns 1 if value exists in the set
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};