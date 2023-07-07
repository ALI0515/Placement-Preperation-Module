//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int sum=0,i=0,j=0,ans=0;
        unordered_map<int,int>ump;
        while(i<n)
        {
            sum+=A[i];
            if(sum==0)
            ans=i+1;
            if(ump.find(sum)!=ump.end())
            {
                ans=max(ans,i-ump[sum]);
            }
            else
            ump[sum]=i;
            i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends