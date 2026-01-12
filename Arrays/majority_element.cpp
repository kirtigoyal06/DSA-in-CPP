// Problem: Find the element that appears more than ⌊n/2⌋ times in the array.
// Approach: Use Moore’s Voting Algorithm to find the majority element
// by canceling out different elements.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,candidate=0;
        for(int x:nums)
        {
            if(count==0)
              candidate=x;
            if(x==candidate)
              count++;
            else
              count--;  
        }
        return candidate;
    }
};
