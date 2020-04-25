#include <string>


class Solution {
public:
int strStr(std::string haystack, std::string needle) 
{      
     int pos = haystack.find(needle);
    
    if (pos != std::string::npos)
    {
        return pos;
    }
    
    return -1;
}
};
