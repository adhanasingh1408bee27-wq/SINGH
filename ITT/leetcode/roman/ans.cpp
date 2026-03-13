#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // Check if current value is less than the next value
            if (i + 1 < n && m[s[i]] < m[s[i+1]]) {
                ans -= m[s[i]]; // Subtraction rule (e.g., IV = -1 + 5)
            } else {
                ans += m[s[i]]; // Standard addition
            }
        }
        return ans;
    }
};
