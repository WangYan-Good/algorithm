/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
      //stack<char> cstack;
      int sum = 0;
      for( int index = s.length()-1; index >= 0; index-- ) {
          // push stack
        //   cstack.push(s.at(index));
        switch(s[index]) {
            case 'I':
              sum += 1;
              break;
            case 'V':
              if( index != 0 &&  s[index-1] == 'I' ) {
                  sum += 4;
                  index--;
              } else {
                  sum += 5;
              }
              break;
            case 'X':
              // IX
              if( index != 0 &&  s[index-1] == 'I' ) {
                  sum += 9;
                  index--;
              } else {
                  sum += 10;
              }
              break;
            case 'L':
              //XL
              if( index != 0 && s[index-1] == 'X' ) {
                  sum += 40;
                  index--;
              } else {
                  sum += 50;
              }
              break;
            case 'C':
              // XC
              if( index != 0 && s[index-1] == 'X' ) {
                  sum += 90;
                  index--;
              } else {
                  sum += 100;
              }
              break;
            case 'D':
              // CD
              if( index != 0 && s[index-1] == 'C' ) {
                  sum += 400;
                  index--;
              } else {
                  sum += 500;
              }
              break;
            case 'M':
              // CM
              if( index != 0 && s[index-1] == 'C' ) {
                  sum += 900;
                  index--;
              } else {
                  sum += 1000;
              }
              break;
            default:
              break;
        }
      }
      return sum;
    }
};
// @lc code=end

