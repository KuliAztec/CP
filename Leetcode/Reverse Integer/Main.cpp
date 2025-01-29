#include <stdio.h>
#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        
        while (x != 0) {
            int backk = x % 10;
            // Overflowed xD
            if (reversed > INT_MAX/10 || reversed < INT_MIN/10) {
                return 0;
            }
            reversed = reversed * 10 + backk;
            x /= 10;
        }
        
        return (int)reversed;
    }
};