// Problem: Remove all occurrences of a given substring from a string.
// Approach: Traverse the string and erase the substring whenever it appears,
// repeat until no more occurrences remain.
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size()>0&&s.find(part)<s.size())
          s.erase(s.find(part),part.length());
        return s;  
    }
};
