/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // solution 1
        // int renum = 0;
        // int index_pre = 0;
        // int index_aft = 0;
        // if( nums.empty() ) {
        //     return 0;
        // }
        // for ( int index = 0; index < nums.size()-renum-1; index++ ) {
        //     // if( nums[index] == nums[index+1] ) {
        //     //     // move
        //     //     for( int indey = index+1; indey < nums.size()-renum; indey++ ) {
        //     //         nums[indey] = nums[indey+1];
        //     //     }
        //     //     renum++;
        //     // }
        //     if( (nums[index] == nums[index+1]) && (index+1 < nums.size()-renum-1 ) ) {
        //         index_pre = index;
        //         index_aft = index;
        //         while ( (nums.size() > index_aft+1 ) && (nums[index_aft+1] == nums[index_pre]) ) {
        //             index_aft++;
        //         }
        //     } else {
        //         continue;
        //     }
        //     // Move
        //     renum += (index_aft-index_pre);
        //     for( int indey = index_pre+1; indey < nums.size()-renum; indey++ ) {
        //         nums[indey] = nums[indey+(index_aft-index_pre)];
        //     }
        // }
        // return (nums.size()-renum);

        // solution 2 after reference
        // int i = !(int)nums.empty();
        // for( auto n:nums ) {
        //     if( n > nums[i-1] ) {
        //         nums[i++] = n;
        //     }
        // }
        // return i;

        // solution 3
        int i = !nums.empty();
        for ( int index = 1; index < nums.size(); index++ ) {
            if( nums[index] > nums[i-1] ) {
                nums[i++] = nums[index];
            }
        }
        return i;
    }
};
// @lc code=end

