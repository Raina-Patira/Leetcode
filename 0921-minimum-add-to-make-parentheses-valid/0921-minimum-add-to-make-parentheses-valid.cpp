class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(auto i:s){
            if(i=='(') st.push(i);
            else if(i==')' && st.size() && st.top()=='(') st.pop();
            else ans++;
        }
        int n=st.size();
        return ans+n;
    }
};