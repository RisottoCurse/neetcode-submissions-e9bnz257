class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp; 

        for (const string& s : strs) {

            vector<int> frequency(26, 0); // inside the loop so new vector is created

            for (char c : s) {
                frequency[c - 'a']++;
            }

            string key = "";

            for (int i = 0; i < frequency.size(); i++) {
                key += to_string(frequency[i]) + "#";
            }

            mp[key].push_back(s);
        }

        vector <vector<string>> result;

        for(auto& pair : mp) {
            result.push_back(pair.second);
        }

        return result;

    }
};
