class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stackOfBrackets;

        unordered_map<char, char> brackets = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {

            if (brackets.count(c)) {
                if (!stackOfBrackets.empty() && stackOfBrackets.top() == brackets[c]) {
                    stackOfBrackets.pop();
                }

                else {
                    return false;
                }
            }

            else {
                stackOfBrackets.push(c);
            }
        }

        return stackOfBrackets.empty();
        
    }
};
