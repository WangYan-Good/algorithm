/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> timeList;
        uint8_t h, m;

        for (h = 0; h < 12; h++) {
            for (m = 0; m < 60; m++) {
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                    timeList.push_back((to_string(h) + ":" + (m < 10 ? "0":"") + to_string(m)));
                }
            }
        }
        return timeList;
    }
};
// @lc code=end

