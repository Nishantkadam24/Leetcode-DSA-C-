class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=nums[n/2];
        int s=0;
        for(int i=0;i<n;i++){
            s+=abs(nums[i]-mid);
        }
        return s;
    }
};