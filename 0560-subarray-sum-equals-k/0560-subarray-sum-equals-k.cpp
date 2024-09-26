class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,n=nums.size();
        int ps=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            count+=mp[ps-k];
            cout<< mp[ps-k]<<" ";
            mp[ps]++;
            
        }
        return count;
    }
};