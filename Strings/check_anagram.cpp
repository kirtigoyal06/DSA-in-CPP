class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
          return false;
        vector<int>freq1(26,0),freq2(26,0);
        for(char ch:s)
          freq1[ch-'a']++;
        for(char ch:t)
          freq2[ch-'a']++;
        return freq1==freq2;
    } 
};
