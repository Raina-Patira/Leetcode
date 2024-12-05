class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.size();
        int i =0, j=0; // track start and target index
        while(i<n || j<n){
            // skip _ in start
            while(i<n && start[i] == '_'){
                i++;
            }
            // skip _ in target
            while(j<n && target[j] == '_'){
                j++;
            }
            // one str get exausted, both then true
            if(i == n || j == n){
                break;
            }
            // check movements L  R 
            if(start[i]!=target[j] || (start[i]=='L' && i<j)|| (start[i] == 'R' && i>j) ){
                return false;
            }
            i++;
            j++;
        }
        return i == n && j == n;
    }
};



