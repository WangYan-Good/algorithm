/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include <stack>
class Solution {
public:
    bool isPalindrome(int x) {
        //std::stack<int> istack;
        int temp = x;
        int result = 0;
        if( temp % 10 == 0 && temp != 0 ) {
            return false;
        }
        while( temp != 0 ) {
            //istack.push( temp%10 );
            if(  result >= (INT_MAX/10) 
              || result <= (INT_MIN/10)
              || ( temp < 0 )
            ) {
                return false;
            }
            result = result*10 + ( temp%10 );
            temp /= 10;
        }
        if( x == result ) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

