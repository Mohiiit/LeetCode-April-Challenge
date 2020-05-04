class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a = "";
        string b = "";
        int count = 0;
        for(int i =S.length()-1; i>=0; i--)
        {
            string curr = S.substr(i,1);
            if(curr=="#")
            {
                count++;
            }
            else
            {
                if(count==0)
                {
                    a+=curr;
                }
                else
                {
                    count--;
                }
            }
        }
        count = 0;
        for(int i =T.length()-1; i>=0; i--)
        {
            string curr = T.substr(i,1);
            if(curr=="#")
            {
                count++;
            }
            else
            {
                if(count==0)
                {
                    b+=curr;
                }
                else
                {
                    count--;
                }
            }
        }
        
        return (a==b);
    }
};
