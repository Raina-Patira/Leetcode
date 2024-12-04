class Solution {
public:
    int isPrefixOfWord(string sen, string search) {
        int res, j=0;
        int words=1;
        for(int i=0;i<sen.size();i++){
            if(sen[i]==search[j]) j++;
            else j=0;
            if(sen[i]==' ') words++;
            if(j==search.length() && (i-j==-1 || sen[i-j]==' '))
                return words;
        }
        return -1;
    }
};