class Solution {
public:
    int partitionString(string s) {
        vector<int> v(26,0);
        int ans=1;
        for(auto i: s){
            if(v[i-'a']==1){
                ans++;
                fill(v.begin(), v.end(), 0);
            }
            v[i-'a']++;
        }
        return ans;
    }
};