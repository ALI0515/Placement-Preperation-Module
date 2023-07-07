class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        int first=0,second=0;
        for(int i=0;i<nums.size();i++)
        {
            ump[nums[i]]=i;
        }
         for(int i=0;i<nums.size();i++)
         {
            if(ump.find(target-nums[i])!=ump.end()&&ump[target-nums[i]]!=i)
            {
                first=i;
                second=ump[target-nums[i]];
                break;
            }
         }
        return {first,second};
    }
};