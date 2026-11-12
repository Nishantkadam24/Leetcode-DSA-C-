class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n= nums.size();
        int c=1, b=1,w=1;
        for(size_t i=1;i<n;++i){
            b=nums[i-1]<nums[i]?b+1:1;
            w=nums[i-1]>nums[i]?w+1:1;
            c=max({c,b,w});
        }
        return c;
    }
};