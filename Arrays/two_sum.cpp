// Problem: Two Sum
// Sheet: Love Babbar
// Difficulty: Easy
// Approach: Hash Map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)       
        {
            int need=target-nums[i];
            if(mp.count(need))
                return {mp[need],i};
            mp[nums[i]]=i;
        }
        return {};
    }
};
