// Merge two sorted array using vector 

// Best way to merge Two Sorted array:-

// First I have resized the first vector 
// Than i merged there elements
// In the end sorting 
// !!Simple as that!!!

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(n+m);
        int k=0;
        for(int i=m;i<nums1.size();i++)
        {
            nums1[i]=nums2[k++];
        }
            sort(nums1.begin(),nums1.end());
    }
};