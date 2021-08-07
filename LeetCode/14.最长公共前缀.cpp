/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
// #include <iostream>
// #include <vector>
// using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sulution 1
        char ch ;
        int shortest_str_index = 0;
        string longest_common_prestr;

        if( strs.size() == 0 ) {
            return "";
        }

        // find the shortest string in strs
        for( int str_index = 1; str_index < strs.size(); str_index++ ) {
            if( strs[str_index].length() < strs[str_index-1].length() ) {
                shortest_str_index = str_index;
            }
        }
        if( strs[shortest_str_index].length() == 0 ) {
            return "";
        }

        //circle the character of strs[shortest_str_index] from 0 and max length
        for( int ch_index = 0; ch_index < strs[shortest_str_index].length(); ch_index++ ) {
            ch = strs[shortest_str_index][ch_index];
            for( auto x:strs ) {
                if( x[ch_index] != ch ) {
                    longest_common_prestr = strs[shortest_str_index].substr( 0, ch_index );
                    return longest_common_prestr;
                }
            }
        }
        return strs[shortest_str_index];

        // solution 2
        // char ch ;
        // int ch_index;
        // string longest_common_prestr;

        // if( strs.size() == 0 ) {
        //     return "";
        // }

        // //circle the character of strs[shortest_str_index] from 0 and max length
        // for( ch_index = 0; ch_index < strs[0].length(); ch_index++ ) {
        //     ch = strs[0][ch_index];
        //     for( auto x:strs ) {
        //         if( x[ch_index] != ch ) {
        //             longest_common_prestr = strs[0].substr( 0, ch_index );
        //             return longest_common_prestr;
        //         }
        //     }
        // }
        // longest_common_prestr = strs[0].substr( 0, ch_index );
        // return longest_common_prestr;
    }
};
// @lc code=end

