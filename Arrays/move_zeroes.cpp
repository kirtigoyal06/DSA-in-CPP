// Problem: Move all zeroes to the end of the array while maintaining
// the relative order of non-zero elements.
// Approach: Use two pointers; place non-zero elements at the front
// and fill the remaining positions with zeroes.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,n=nums.size();
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=0)
            {
             nums[i]=nums[j];
             i++;
            }
        }
        while(i<n)
        {
            nums[i++]=0;
        }
    }
};
