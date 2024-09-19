class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxi=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) m[nums[i]]++;
            maxi=max(maxi,nums[i]);
        }
        for(int i=1;i<=maxi;i++){
            if(m.find(i)==m.end()) return i;
        }
        return maxi+1;
    }
};