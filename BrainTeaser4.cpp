#include <string>


class Solution {
public:
    
    string generateTheString(int n) {
        
    string Result;
        
        string s="abcdefghijklmnopqrstuvwxyz";
        if(n<26)
          return s.substr(0,n);
        
        if ( n%2!=0)
        {
            for (int i = 0; i < n; n++)
            {
                Result+= "a";
            }
        }
        else
        {
            for (int i = 0; i < (n-1); n++)
            {
                Result+="a";
            }

            Result+="b";
            
        }
        
        return Result;
        
    }
};