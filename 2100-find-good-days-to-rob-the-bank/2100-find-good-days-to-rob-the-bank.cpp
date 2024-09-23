class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n= security.size();
        vector<int> st(n),end(n),ans;
        st[0]=0;
        for(int i=1;i<n;i++){
            if(security[i-1]>=security[i]){
                st[i]=st[i-1]+1;}
            else{
                st[i]=0;}
        }
        end[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(security[i]<=security[i+1]){
                end[i]=end[i+1]+1;}
            else{
                end[i]=0;}
        }
        for(int i=0;i<n;i++){
            if(st[i]>= time && end[i]>= time){
                ans.push_back(i);}
        }
        return ans;
    }
};
