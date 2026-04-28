class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map<int, int> values;// value, index

        for (int i = 0; i < numbers.size(); i++) {

            int difference = target - numbers[i];

            if(values.count(difference)) {
                return{values[difference], i + 1};

            }

            values[numbers[i]] = i + 1;

        }

   
            
    }
};
