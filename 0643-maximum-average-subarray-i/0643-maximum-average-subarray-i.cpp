
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        double ans = INT_MIN;
        double sum = 0;

        for (int r = 0; r < n; r++) {
            sum += nums[r];

            if (r - l + 1 == k) {
                double avg = sum / k;
                ans = max(ans, avg);

                sum -= nums[l];
                l++;
            }
        }

        return ans;
    }
};
