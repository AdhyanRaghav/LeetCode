#include <algorithm>
class Solution {
public:
    int reverse(int x) {

        string s=to_string(x);

        int j=s.size();

        while(s[j]==0){
            j--;
        }

        int i=0;

        while(i<=j){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }

        if(x<0){
            s="-"+s;
                
        }
        return safestoi(s);
    }
    int safestoi(const string& s){
        try{
                return stoi(s);
        }

        catch(const out_of_range&){
            return 0;
        }

        catch(const invalid_argument&){
            return 0;
        }
    }

};