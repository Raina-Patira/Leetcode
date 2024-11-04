class Solution {
public:
    string compressedString(string word) {
        string comp;
        int c=1;
        for(int i=0;i<word.length();i++){
            if(word[i]==word[i+1] && c<9)
                c++;
            else{
                comp.push_back(c+'0');
                comp.push_back(word[i]);
                c=1;
            }
        }
        return comp;
    }
};