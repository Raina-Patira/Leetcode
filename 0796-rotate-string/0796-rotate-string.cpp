class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.length()!=g.length()) return false;
        s = s + s;
        return s.find(g)!=-1;
    }
};