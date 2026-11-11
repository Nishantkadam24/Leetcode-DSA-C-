class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int mc=0;
        for(auto x:mp){
            mc = max(x.second,mc);
        }
        int ans=n;
        for(auto y:mp){
            if(y.second==mc){
                int l=0,r=n-1;
                while(nums[l]!=y.first){
                    l++;
                }
                while(nums[r]!=y.first){
                    r--;
                }
                ans=min(ans,r-l+1);
            }
        }
        return ans;
    }
};