class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums;
        int c1=0,c2=0;
        vector<int> res;
        int first=nums[0];
        int sec=nums[1];
        for(int i=0;i<nums.size();i++){
            if(first==nums[i]) c1++;
            else if(sec==nums[i]) c2++;
            else if(c1==0){
                first=nums[i];
                c1++;
            }
            else if(c2==0){
                sec=nums[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i:nums){
            if(i==first) c1++;
            else if(i==sec) c2++;
        }
        if(c1>nums.size()/3) res.push_back(first);
        if(c2>nums.size()/3) res.push_back(sec);
        return res;
    }
};