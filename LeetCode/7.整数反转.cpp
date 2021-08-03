/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
//#include <stack>
#include <cmath>
class Solution {
public:
    int reverse(int x) {
        //std::stack<int> istack;
        if( x == 0 ) return x;
        //int flag = x/(std::abs(x));
        int result = 0;
        while( x != 0 ) {
            //istack.push( x % 10 );
            if( result <= (INT_MAX/10) 
              && result >= (INT_MIN/10)
            ) {
                result = result * 10 + (x%10);  
            } else {
                return 0;
            }
            x /= 10;
        }
        return result;
    }
};
// @lc code=end

