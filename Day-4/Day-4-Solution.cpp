class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        vector<int> v;
        // count the number of zero and add the non-zero elements in a separate vector.
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else
            {
                v.push_back(nums[i]);
            }
        }
        // clear the initial vector and first push the non-zero elements and then add the number of zeroes.
        nums.clear();
        for(int i=0; i<v.size(); i++)
        {
            nums.push_back(v[i]);
        }
        for(int i =0; i<zero; i++)
        {
            nums.push_back(0);
        }
    }
};
