/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> single;
        vector<int>::iterator  ipre;
        vector<int>::iterator  ilate;

        int remainder = 0;
        //
        // x < 0
        //
        if (x < 0) return false;

        //
        // x >= 0
        //
        while (x != 0) {
            remainder = x%10;
            x /= 10;
            single.push_back(remainder);
        }

        //
        // initialize ipre
        //
        ipre = single.begin();
        ilate = single.end();
    }
};
// @lc code=end

