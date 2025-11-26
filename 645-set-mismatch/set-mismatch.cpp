class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;

        set<int> s(nums.begin(),nums.end());

        unordered_map<int,int>freq;

        bool b=false;

        for(int x:nums){
            freq[x]++;
        }

        for(auto &p:freq){
            if(p.second==2){
                ans.push_back(p.first);
            }
        }

       for (auto it = s.begin(); next(it) != s.end(); ++it) {
            if (abs(*it - *next(it)) != 1) {
                b=true;
                ans.push_back(*it+1);
                break;
            }
        }

        if(s.size()==1){
            if(*s.rbegin()==1){
                ans.push_back(*s.rbegin()+1);
                b=true;
            }
            else{  
                ans.push_back(*s.rbegin()-1);
                b=true;
            }
        }

        if(!b){
            if(*s.begin()!=1){
                ans.push_back(*s.begin()-1);
            }else{
                ans.push_back(*s.rbegin()+1);
            }
           
        }

        return ans;
    }
};