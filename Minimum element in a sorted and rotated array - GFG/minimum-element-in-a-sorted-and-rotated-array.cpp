//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        int l=0,r=n-1,ans=INT_MAX,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(arr[l]<=arr[mid])
            {
            ans=min(arr[l],ans);
            l=mid+1;
            }
            else
            {
             ans=min(arr[mid],ans);
             r=mid-1;
            }
           
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends