class Solution {
public:
    bool isPalindrome(string s) {

        string newS;

        for (char c : s) {
            if (isalnum(c)) {
                newS += tolower(c);
            }
        }

        string sinv = newS;

        reverse(sinv.begin(), sinv.end());

        for (int i = 0; i < newS.size(); i++) {

            if (newS[i] != sinv[i]) {
                return false;
            }
        }
        return true;
        
    }
};
