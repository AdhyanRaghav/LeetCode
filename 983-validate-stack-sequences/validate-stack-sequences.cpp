
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       stack<int>st;

       int i=0;
       int j=0;

       while(i<pushed.size() && j<popped.size()){
        if(pushed[i]==popped[j]){
            i++;
            j++;
            if(!st.empty()){
                while(!st.empty() && st.top()==popped[j]){
                    st.pop();
                    j++;
                }
            }
        }else{
            st.push(pushed[i]);
            i++;
        }
       }

       while(j<popped.size()){
        int p=st.top();
        if(p==popped[j]){
            j++;
            st.pop();
        }else{
            return false;
        }
       }
       return true;
    }
};