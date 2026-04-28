class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // create a map of key value where key is number in array and value is the frequency

        map<int, int> mp;

        for(const auto& num : nums) {
            mp[num]++;
        }

        // store the key value in a pair where the frequency (value) appears first

        vector<pair<int, int>> freqNum;

        for(const auto& p : mp) {
            freqNum.push_back({p.second, p.first});
        }

        // sort the pairs in reverse order of frequency

        sort(freqNum.rbegin(), freqNum.rend());

        // create vector of results

        vector<int> res;

        // iterate through pairs

        for(int i = 0; i < k; i++) {

            res.push_back(freqNum[i].second);
        }

        return res;


       
    }
};
