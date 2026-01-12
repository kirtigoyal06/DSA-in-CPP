// Problem: Reverse the given string in-place.
// Approach: Use two pointers at the start and end; swap characters
// and move pointers toward each other until they meet.
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
