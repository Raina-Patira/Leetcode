class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(auto i: s){
            if(st.size()){
                if((i=='B' && st.top()=='A') || (i=='D' && st.top()=='C')) st.pop();
                else st.push(i);
            }
            else st.push(i);
        }
        return st.size();
    }
};