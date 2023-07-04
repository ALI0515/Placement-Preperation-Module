class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s=nums1.size();
           int j=s-n;
        for(int i=s-1;i>=j;i--)
        {
            nums1.erase(nums1.begin()+i);
        }
        for(auto it:nums2)
        {
            nums1.push_back(it);
        }
        sort(nums1.begin(),nums1.end());
    }
};