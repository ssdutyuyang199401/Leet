//Given a string, find the length of the longest substring without repeating characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int length=0;
        for(int i=0;i<s.length();i++)
        {
          set<char> a;
          for(int j=i;j<s.length();j++)
          {
            if(a.count(s[j])==0&&j!=s.length()-1)
            {
              a.insert(s[j]);
            }
            else if(a.count(s[j])==0&&j==s.length()-1)
            {
              if(length<a.size()+1)
              {
                length=a.size()+1;
              }
              break;
            }
            else
            {
              if(length<a.size())
              {
                length=a.size();
              }
              break;
            }
          }
        }
        return length;
    }
};
