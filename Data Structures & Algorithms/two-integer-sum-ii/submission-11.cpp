class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right =numbers.size() - 1;

        while (left < right) {
            // calculate sum
            // if sum is greater than target move right back
            // if less move left forward

            int sum = numbers[left] + numbers[right];

            if (sum > target) {
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                return {left + 1, right + 1};
            }
        }

        return {};
    }
};
