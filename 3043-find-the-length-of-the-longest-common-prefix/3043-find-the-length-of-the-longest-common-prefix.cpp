class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> hash;
        int res=0;
        for(int i=0;i<arr1.size();i++){
            int n=to_string(arr1[i]).length();
            while(n!=0){
                hash.insert(arr1[i]/pow(10,n-1));
                n--;
            }
        }
        for(int i=0;i<arr2.size();i++){
            int n=to_string(arr2[i]).length();
            while(n!=0){
                int a=arr2[i]/pow(10,n-1);
                //cout<<"a "<<a<<" "<<"n"<<n<<" ";
                if(hash.find(a)!=hash.end()) {
                    int m=to_string(a).length();
                    res=max(res,m);
                }
                n--;
            }
        }
        return res;
    }
};