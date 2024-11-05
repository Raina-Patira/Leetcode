class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        int i=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1] && s[i]==s[i+2]) continue;
            else ans.push_back(s[i]);
        }
        return ans;
    }
};