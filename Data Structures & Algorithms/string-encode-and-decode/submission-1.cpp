class Solution {
public:

    // need to encode a vector of strings to a single strings
    string encode(vector<string>& strs) {

        // store the vector of strings as string with leng + # + word
        string encoded;
        
        for(const auto& s : strs) {
            encoded += to_string(s.size()) + '#' + s;
        }
        return encoded;  
    }

    // decode a single string into vecctor of strings;
    vector<string> decode(string s) {

        vector<string> res;
        int i = 0; 

        while (i < s.size()) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }
            // store the number right before the # as length
            int length = stoi(s.substr(i, j-i));
            // move i past #
            i = j + 1;
            // store word 
            res.push_back(s.substr(i, length));
            // move j past word
            j = i + length;
            // reset i past the word for next loop
            i = j;
        }

        return res;  
    }
};
