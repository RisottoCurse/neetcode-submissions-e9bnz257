class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> res(n, 0);

        stack<pair<int, int>> tempStack; // {temperature, index}

        for (int i = 0; i < n; i++) {

            int t = temperatures[i];

            while(!tempStack.empty() && t > tempStack.top().first) {

                auto pair = tempStack.top();
                tempStack.pop();
                res[pair.second] = i - pair.second;
            }

            tempStack.push({t, i});

        }

        return res;
        
    }
};
