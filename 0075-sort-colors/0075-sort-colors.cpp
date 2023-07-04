class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(auto it:nums)
        {
            if(it==0)
                zero++;
            if(it==1)
                one++;
            if(it==2)
                two++;
        }
        int i=0;
        while(zero--)
            nums[i++]=0;
        while(one--)
            nums[i++]=1;
        while(two--)
            nums[i++]=2;
    }
};