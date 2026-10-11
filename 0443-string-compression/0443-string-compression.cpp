class Solution {
public:
    int compress(vector<char>& chars) {
        int j=1;
        int count = 1;

        for(int i=1; i<chars.size(); i++)
        {
            
            if(chars[i]!=chars[i-1])
            {
                if(count==1)
                {
                chars[j++]=chars[i];
                }
                else{
                    string temp = to_string(count);
                    for(char c:temp)
                    chars[j++]=c;

                    chars[j++]=chars[i];
                }
                count = 1;
            }
            else
            {
                count++;
            }
        }

        if(count!=1)
            {
                 string temp = to_string(count);
                    for(char c:temp)
                    chars[j++]=c;
            }

        return j;
    }
};