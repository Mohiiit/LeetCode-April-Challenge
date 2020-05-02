class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        //firstly we will find out whether all the given numbers are negative or not.
        //If so, then we need to print only the largest negative number.
        for(int i =0; i<nums.size(); i++)
        {
            maxi = max(maxi,nums[i]);
        }
        // if largest number is negative or zero then we will simply return it.
        if(maxi<=0)
        {
           return maxi; 
        }
        int sum= 0;
        int ans = 0;
        // Now we will iterate through the vector and at any time when sum became negative we will make it zero.
        // This way will bee get the maximum sum.
        for(int i =0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                sum=0;
            }
            ans = max(sum,ans);
        }
        return ans;
    }
};
