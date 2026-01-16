
// LeetCode - 1207 
// Solution - Using unordered_map & unordered_set
// 16-01-2026


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // InitiaLize a UnorderedMap
        unordered_map<int, int> mp;
        for (int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }

        // Initialize a unorderedSet
        unordered_set<int> set;
        for (auto val : mp) {
            set.insert(val.second) ;
        }
          if (mp.size() == set.size()) return true ;
          else return false ;
    }
};