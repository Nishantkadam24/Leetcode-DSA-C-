class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int c=0,s=0,t=k*threshold;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
            if(i>=k)s-=arr[i-k];
            if(i>=k-1&&s>=t)c++;
        }
        return c;
    }
};