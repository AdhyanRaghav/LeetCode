#include <algorithm>
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        stack<long long>s;
        vector<long long>ans;

        // if(nums.size()>1){
        //     for(int i=0;i<=nums.size()-2;i++){
        //     if(nums[i]==nums[i+1]){
        //         int a=nums[i]*2;
        //         nums[i+1]=0;

        //         if(!s.empty() && a==s.top()){
        //             int b=s.top();
        //             s.pop();
        //             if(!s.empty() && (a*2)==s.top()){
        //                 s.pop();
        //                 s.push((a*2)*2);
        //             }else{
        //                 s.push(a*2);
        //             }
                    
        //         }else{
        //             s.push(a);
        //         }
        //         i++;
        //     }else{
        //         if(!s.empty() && nums[i]==s.top()){
        //             s.pop();
        //             s.push(nums[i]*2);
        //         }else{                               
        //             s.push(nums[i]);
        //         }
        //     }
        // }

        // if(nums[nums.size()-1]!=0){
        //     if(nums[nums.size()-1]==s.top()){
        //         s.pop();
        //         s.push(nums[nums.size()-1]*2);
        //     }else{
        //         s.push(nums[nums.size()-1]);
        //     }
        // }

        s.push(nums[0]);

        for(long long i=1;i<nums.size();i++){
            if(!s.empty() && nums[i]==s.top()){
                s.pop();
                long long a=nums[i]*2;
                if(!s.empty()){
                    while(!s.empty() && a==s.top()){
                        s.pop();
                        a=a*2;
                    }
                    s.push(a);
                }else{
                    s.push(a);
                }
                
            }else{
                s.push(nums[i]);
            }
        }

        while(!s.empty()){
            long long c=s.top();
            ans.push_back(c);
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};