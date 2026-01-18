// Platform: LeetCode
// Problem: Vowel Consonant Score
// Date: 16-01-2026

class Solution {
public:
    int vowelConsonantScore(string s) {
        int Vcount = 0;
        int Ccount = 0;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                Vcount++;
            else {
                if (isalpha(s[i])) Ccount++;
            }
        }

        if (Ccount > 0)
            ans = Vcount / Ccount;

        return ans;
    }
};
