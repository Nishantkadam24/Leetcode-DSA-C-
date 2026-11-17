class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,c1=0;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0){
                    mp.erase(nums[l]);
                    
                }
                
                l++;
            }
            c1+=r-l+1;

        }
        mp.clear();
        l=0;
        int c2=0;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp.size()>k-1){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0){
                    mp.erase(nums[l]);
                    
                }
                
                l++;
            }
            c2+=r-l+1;

        }
        int ans=c1-c2;
        return ans;
    }
};