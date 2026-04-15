class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();

	    string ans="";

	    for(int i=0;i<n;i++){
		    string s1=expand(s,i,i);
		    string s2=expand(s,i,i+1);

		    if(s1.size()>ans.size()) ans=s1;
		    if(s2.size()>ans.size()) ans=s2;
	    }
        return ans;
        
    }

    
    string expand(string s,int left,int right){
	    while(left>=0 && right<s.size() && s[left]==s[right]){
		    left--;
		    right++;
	    }

	    return s.substr(left+1,right-left-1);
    }
};