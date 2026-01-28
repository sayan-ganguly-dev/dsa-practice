// Leetocde - 169

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

          int MaxFreq = 0;
          int MaxEle = 0;

          for (auto ele : mp) {
            if (ele.second > MaxFreq){
                MaxFreq = ele.second;
                MaxEle = ele.first ;
            }
          }

             return MaxEle ;
        
    }
};