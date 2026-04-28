class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // sort the array
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                break;
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            // set left to come after a and right to the end
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum > 0) {
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    // need to skip duplicates
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                }
            }
    
        }

        return res;
    


    }
};
