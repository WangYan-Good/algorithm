/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
/**
 * solution
 * dp[n][n]: two-dimensional array for storing the result that the substring if is a palindrome string, which substring of s is from index I to index J
 * ans: the result of the return is the longest palindrome substring.
 * 
 **/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        /**
          0 - 999
          for recording 
        **/
       int n = s.size();
       bool dp[n][n];
       string ans;

       memset(dp, false, sizeof(dp));
       ans += s[0];

       for( int index = 0; index < n; index++ ) {
           dp[index][index] = true;
       }
        
        // fill out of array
        for( int i = n - 1; i >= 0; i-- ) {
            for( int j = i + 1; j < n; j++ ) {
                if( s[i] == s[j] ) {
                    if( i + 1 == j || dp[i+1][j-1] ) {
                        dp[i][j] = true;
                        // record the answer
                        if( ans.size() < (j - i + 1) )
                            ans = s.substr( i, j - i + 1 );
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

