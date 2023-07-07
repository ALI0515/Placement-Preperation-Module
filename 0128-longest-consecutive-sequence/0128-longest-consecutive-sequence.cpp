class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mn=INT_MAX;
         for(auto it:nums)
         mn=min(mn,it);
         set<int>uns;
         for(auto it:nums)
         uns.insert(it);
         int c=0,flag,ans=0;
         for(auto it:uns)
         {
             if(it==mn||flag+1==it)
             {
             c++;
             }
            else if(flag+1!=it)
            {
                ans=max(ans,c);
                c=1;
            }
            flag=it;
            cout<<c;
         }
         if(c>ans)
         return c;
         else
         return ans;
    }
};