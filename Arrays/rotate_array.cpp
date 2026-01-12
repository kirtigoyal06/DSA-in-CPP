// Problem: Rotate an array to the right by k steps.
// Approach: Reverse the entire array, then reverse the first k elements
// and the remaining elements separately.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums. end());
    }
};
