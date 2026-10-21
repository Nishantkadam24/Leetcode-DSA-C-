class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int re=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int a=i+1,b=nums.size()-1;
            while(a<b){
                int s=nums[i]+nums[a]+nums[b];
                if(abs(target -s)<abs(target-re))
                    re=s;
                if(s==target)return target;
                else if(s<target)a++;
                else b--;
            }
        }
        return re;
    }
};