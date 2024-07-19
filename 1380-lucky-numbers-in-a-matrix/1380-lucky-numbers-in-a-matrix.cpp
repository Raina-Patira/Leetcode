class Solution {
public:
    bool present(vector<int> mini,int ma){
        for (int i=0;i<mini.size();i++){
            if (mini[i]==ma){
                return true;
            }
        }
        return false;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> mini;
        vector<int> res;
        int mi=INT_MAX;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                mi=min(matrix[i][j],mi);
            }
            mini.push_back(mi);
            mi=INT_MAX;
        }
        int ma=INT_MIN;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                ma=max(matrix[j][i],ma);
            }
            if(present(mini,ma)){
                res.push_back(ma);
            }
            ma=INT_MIN;
        }
        return res;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();