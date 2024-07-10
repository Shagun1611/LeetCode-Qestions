// Sorting in the vector

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    sort(nums.begin(),nums.end());   // Begin of the vector and ending of the vector
    return nums;   // return after sorting
    }
};