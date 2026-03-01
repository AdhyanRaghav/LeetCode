class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        vector<int>arr;

        for(int i:nums){
            freq[i]++;
        }

        for(auto it:freq){
            if(it.second>nums.size()/3){
                arr.push_back(it.first);
            }
        }

        return arr;
    }
};