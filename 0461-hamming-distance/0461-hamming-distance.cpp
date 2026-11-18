class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int c=0;
        while(n){
            n&=(n-1);
            c++;
        }
        return c;
    }
};