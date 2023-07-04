class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int amin=INT_MAX,ans=0;
        for(auto it:prices)
        {
            if(it<amin)
            {
                amin=it;
                continue;
            }
            ans=max(ans,it-amin);
        }
        return ans;
    }
};