class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> nums;

        for (const string& t : tokens) {
            
            if (t == "+" || t == "-" || t == "*" || t == "/") {

                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();

                if (t == "+") {
                    nums.push(a + b);
                }
                else if (t == "-") {
                    nums.push(a - b);
                }
                else if (t == "*") {
                    nums.push(a * b);
                }
                else if (t == "/") {
                    nums.push(a / b);
                }   
            }

            else {
                nums.push(stoi(t));
            }

        }

        return nums.top();
    }
};
