class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int>::iterator it;
       it=unique(nums.begin(),nums.end());

       nums.resize(distance(nums.begin(),it));

       return nums.size();

    }
};