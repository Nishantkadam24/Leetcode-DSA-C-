class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>c;
        c[0]=1;
        int cs=0;
        int ts=0;
        for(int x:nums){
            cs+=x;
            if(c.find(cs-goal)!=c.end()){
                ts+=c[cs-goal];
            }
            c[cs]++;
        }
        return ts;
    }
};