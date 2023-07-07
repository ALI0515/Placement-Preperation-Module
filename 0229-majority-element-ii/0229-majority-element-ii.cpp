class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n=nums.size();
        int no=n/3;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
        {
            ump[nums[i]]++;
        }
        vector<int>ans;
        for(auto it:ump)
        {
            if(it.second>no)
                ans.push_back(it.first);
        }
        return ans;
    }
};