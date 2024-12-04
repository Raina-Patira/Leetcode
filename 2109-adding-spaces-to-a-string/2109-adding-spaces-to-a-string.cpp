class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int j=0,n=spaces.size();
        string res;
        for(int i=0;i<s.length();i++){
            if(j<n && i==spaces[j]){
                res.push_back(' ');
                i--;j++;}
            else res.push_back(s[i]);
        }
        return res;
    }
};