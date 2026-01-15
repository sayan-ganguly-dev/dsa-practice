// Platform: LeetCode
// Problem: Valid Anagram
// Date: 16-01-2026

 class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        for (int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
            for (int j=0; j<t.length(); j++) {
                if (mp.find(t[j]) != mp.end()) {
                    mp[t[j]]--;
                    if(mp[t[j]] == 0) mp.erase(t[j]);
                   
                }
                 else return false ;
            }

              if (mp.size() == 0) return true ;
                else return false ;
        
    }
};
