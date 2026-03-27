#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map to store sorted string as key and list of anagrams as value
        unordered_map<string, vector<string>> anagramGroups;
        
        for (string s : strs) {
            string key = s;
            // Sorting the string creates a unique key for all its anagrams
            sort(key.begin(), key.end());
            anagramGroups[key].push_back(s);
        }
        
        // Prepare the final result vector
        vector<vector<string>> result;
        for (auto const& [key, group] : anagramGroups) {
            result.push_back(group);
        }
        
        return result;
    }
};
