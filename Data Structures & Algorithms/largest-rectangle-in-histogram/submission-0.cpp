class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        const int n = heights.size();
        int maxArea = 0;

        stack<pair<int, int>> stack; // store index and height

        for (int i = 0; i < n; i++) {
            int start = i;
            while (!stack.empty() && heights[i] < stack.top().second) {
                pair<int, int> top = stack.top();

                int index = top.first;
                int height = top.second;
                maxArea = max(maxArea, height * (i - index));
                start = index;
                stack.pop();
            }
            stack.push({start, heights[i]});   
        }

        // compute the area for remaining stack components.

        while (!stack.empty()) {

            int index = stack.top().first;
            int height = stack.top().second;
            maxArea = max(maxArea, height * (n - index));
            stack.pop();
        }

        return maxArea;

    





        
    }
};
