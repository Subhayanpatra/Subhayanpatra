#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int res = 0, n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                res -= roman[s[i]];  // Subtract if smaller than next value
            } else {
                res += roman[s[i]];
            }
        }

        return res;
    }
};
