/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rst(2);
        vector<int>::iterator ptr = nums.begin();
        for( int index = 0; index < nums.size(); index++ )
        {
            //
            // 查找另一个元素对应的索引
            //
            ptr = find( nums.begin(), nums.end(), target - nums[index] );
            
            //
            // find 返回的索引不为空 && 返回的索引 != 当前索引
            //
            if ( ptr != nums.end() && ptr != (nums.begin() + index) )
            {
                rst[0] = index;
                rst[1] = ptr - nums.begin();
                return rst;
            }
            
        }
        rst.erase(rst.begin(),rst.end());
        return rst;
    }
};
// @lc code=end

