class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int c=0;
        int a=0,b=n-1;
        while(a<=b){
            if(people[a]+people[b]>limit){
                b--;
                c++;
            }
            else if(people[a]+people[b]<=limit){
                a++;
                b--;
                c++;
            }
        }
        return c;
    }
};