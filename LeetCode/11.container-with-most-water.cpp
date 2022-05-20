/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
// #include <stack>
using namespace std;

// typedef struct {
//     int value;
//     int index;
// } KeyValue;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left, right, max, temp, high, width;
        left = 0;
        right = height.size()-1;
        max = 0;
        
        while (left < right) {
            width = right - left;
            if (height[left] < height[right]) {
                high = height[left];
                left++;
            } else {
                high = height[right];
                right--;
            }

            temp = width*high;
            if (temp > max) {
                max = temp;
            }
        }
        return max;
    }
};
// @lc code=end

