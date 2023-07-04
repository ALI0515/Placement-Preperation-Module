class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int lsum=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>lsum)
            {
                lsum=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
           
        }
        return lsum;
    }
};