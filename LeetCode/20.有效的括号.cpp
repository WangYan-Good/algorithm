/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> cs;
        if( s.empty() ) {
            return true;
        } else {
            cs.push(s[0]);
        }
        for( int ch_index = 1; ch_index < s.length(); ch_index++ ) {
            switch( s[ch_index] ) {
                case '(':
                case '[':
                case '{':
                  cs.push(s[ch_index]);
                  break;
                case ')':
                  if( !cs.empty() && cs.top() == '(' ) {
                      cs.pop();
                  } else {
                      return false;
                  }
                  break;
                case ']':
                  if( !cs.empty() && cs.top() == '[' ) {
                      cs.pop();
                  } else {
                      return false;
                  }
                  break;
                case '}':
                  if( !cs.empty() && cs.top() == '{' ) {
                      cs.pop();
                  } else {
                      return false;
                  }
                  break;
                default:
                  return false;
            }
        }
        if( cs.empty() ) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

