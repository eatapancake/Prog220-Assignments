#include <iostream>
#include <string>

class Solution {
public:
    
    int input;
    int remainder;
    int rev_input;
    bool isPalindrome(int x) {
        do
        {
            input = x;
            //creates the number reversed

            remainder = input % 10;     
            rev_input = (rev_input * 10) + remainder;

            input = input / 10;

            
            
        } while (input =! 0);

        if ( rev_input == x)
        {
            return true;
            //is pallindrome
        }
        else 
        {
            return false;
            //is not  pallindrome
        }
 
        
    }

    int main()
    {
        int x = 12345;

        bool isPalindrome(x); 

    }
};