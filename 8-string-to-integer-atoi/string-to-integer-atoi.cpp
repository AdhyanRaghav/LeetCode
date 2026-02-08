class Solution {
public:
    int myAtoi(string s) {

        string t="";

        if(!isdigit(s[0]) && s[0]!=' ' && s[0]!='-' && s[0]!='+'){
            return 0;
        }
        int f=0;
        for(int i=0;i<s.size();i++){
            
            if(f==0){
                if(isdigit(s[i]) || s[i]=='-'){
                    t.push_back(s[i]);
                    f=1;
                }else if(s[i]=='+'){
                    f=1;
                }else if(s[i]==' '){
                    
                }
                else{
                    return 0;
                }
            }else{
                if(isdigit(s[i])){
                    t.push_back(s[i]);
                }else{
                    break;
                }
            }
        }
        return safestoi(t);
    }

    int safestoi(const string& t){
        try{
            return stoi(t);
        }
        catch(const out_of_range&){
            if(t[0]=='-'){
                return -2147483648;
            }else{
                return 2147483647;
            }
        }
        catch(const invalid_argument&){
            return 0;
        }
    }
};