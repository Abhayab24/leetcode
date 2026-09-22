class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> mergee;
        int pos=0;
        for(int i=0;i<m;i++){            
            mergee.push_back(nums1[i]);
            
        }
        for(int i=0;i<n;i++){
            mergee.push_back(nums2[i]);
        }
        sort(mergee.begin(),mergee.end());
        for(int i=0;i<mergee.size();i++){
            nums1[i]=mergee[i];
        }
    }
};