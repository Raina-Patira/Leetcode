class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(),cit.end());
        int ans=0;
        for (int i = 0; i < cit.size(); i++) {
            int size = cit.size() - i;
            if (cit[i] >= size) {
                ans = max(ans, size);
            }
        }
        return ans;
    }
};