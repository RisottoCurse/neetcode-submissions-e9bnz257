class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> values;

        for (int i = 0; i < nums.size(); i++) {

            int difference = target - nums[i];

            if (values.count(difference)) {

                return {values[difference], i};
                
            }

            values[nums[i]] = i;

        }
    }
};
