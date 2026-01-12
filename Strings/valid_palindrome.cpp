// Problem: Check if a given string is a palindrome, considering only
// alphanumeric characters and ignoring cases.
// Approach: Use two pointers at start and end, skip non-alphanumeric
// characters, compare characters ignoring case, move pointers toward each other.
class Solution {
public:
    bool isvalid(char ch)
    {
        return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9');
    }
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j)
        {
            if(!isvalid(s[i]))
            {
                i++;
                continue;
            }
            if(!isvalid(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
             return false;
            i++;
            j--; 

        }
        return true;
    }
};
