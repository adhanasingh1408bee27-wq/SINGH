#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        string result = "1";
        
        // Iterate from 1 to n-1 to build the sequence
        for (int i = 1; i < n; ++i) {
            string current = "";
            int len = result.length();
            
            for (int j = 0; j < len; ++j) {
                int count = 1;
                // Count consecutive identical characters
                while (j + 1 < len && result[j] == result[j + 1]) {
                    count++;
                    j++;
                }
                // Append the count and the digit
                current += to_string(count) + result[j];
            }
            result = current;
        }
        
        return result;
    }
};
