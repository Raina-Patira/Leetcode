class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& help) {
        if (help.size()==0) return help;
        vector<int> res;
        vector<int> arr=help;
        unordered_map<int,int> m;
        sort(arr.begin(),arr.end());
        int c=1;
        m[arr[0]]=c;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]) c++;
            m[arr[i]]=c;
        }
        for(int i=0;i<arr.size();i++){
            res.push_back(m[help[i]]);
        }
        return res;
    }
};