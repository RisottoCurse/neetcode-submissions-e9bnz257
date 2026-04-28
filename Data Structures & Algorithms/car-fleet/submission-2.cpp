class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        const int n = position.size();
        
        vector<pair<int, int>> carCart;

        for(int i = 0; i < n; i++) {
            carCart.push_back({position[i], speed[i]});
        }

        sort(carCart.rbegin(), carCart.rend());

        int fleets{1}; 
        double prevTime = (double)(target - carCart[0].first) / carCart[0].second;

        for (int i = 1; i < n; i++) {

            double currTime = (double)(target - carCart[i].first) / carCart[i].second;

            if (currTime > prevTime) {
                fleets++;
                prevTime = currTime;
            }
        }

        return fleets;


    }
};
