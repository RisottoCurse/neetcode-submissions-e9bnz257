class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // the key should be the number in the array
        // value is the frequency
        // sort the key and the k number of pairs in vector

        map<int, int> mp;

        for(auto num : nums) {
            mp[num]++;
        }

        vector<pair<int, int>> arr;
        for (const auto& p : mp) {
            arr.push_back({p.second, p.first});
        }

        sort(arr.rbegin(), arr.rend());

        vector<int> results;

        for (int i = 0; i < k; i++) {
            results.push_back(arr[i].second);
        }

        return results;

    }
};
