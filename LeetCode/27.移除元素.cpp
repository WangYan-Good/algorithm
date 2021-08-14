/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
// #include <iostream>
// #include <vector>
#include <algorithm>
// using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // solution 1
        // int valnum = 0;
        // for( int index = 0; index < nums.size()-valnum; index++ ) {
        //     if( nums[index] == val ) {
        //         valnum++;  // front
        //         if( valnum == nums.size() ) {
        //                 return nums.size() - valnum;
        //         }

        //         while ( nums[nums.size()-valnum] == val && nums.size()-valnum != index ) { // deal tail value
        //             valnum++;
        //             if( valnum == nums.size() ) {
        //                 return nums.size() - valnum;
        //             }
        //         }
        //         // deal front value
        //         nums[index] = nums[nums.size()-valnum];
        //     }
        // }
        // return (nums.size()-valnum);

        // solution 2
        nums.erase( remove(nums.begin(), nums.end(), val), nums.end() );
        return nums.size();
    }
};
// @lc code=end

