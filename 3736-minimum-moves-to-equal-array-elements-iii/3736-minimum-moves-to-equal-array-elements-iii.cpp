class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int c=0;
       int maxi = INT_MIN;

        for(int i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
        }

        for(int i = 0; i < n; i++){
            c += maxi - nums[i];
        } 
        return c;
    }
};