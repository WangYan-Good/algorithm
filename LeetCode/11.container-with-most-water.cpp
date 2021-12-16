/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
       int left = 0;
       int right = height.size() - 1;
       int most_water = ( right - left ) * min( height[left], height[right] );

       while ( left < right ) {
           
       }
    }
};
// @lc code=end

