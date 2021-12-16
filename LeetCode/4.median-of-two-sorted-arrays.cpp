/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        double pre_median;
        double median;
        bool flag;
        int index = 0;

        // flag = true odd number
        // flag = false even number
        if (size % 2 ==0) {
            flag = false;
        } else {
            flag = true;
        }

        // initial median
        if (nums1.empty() && nums2.empty()) { // nums1 is empty & nums2 is empty
            return 0;
        }

        if (nums1.empty() && !nums2.empty()) { // nums1 is empty & nums2 is not empty
            if (flag) {
                return (double)nums2[size/2];
            } else {
                return ((double)(nums2[size/2]) + (double)(nums2[size/2 - 1]));
            }
        }

        if (nums2.empty() && !nums1.empty()) { // nums2 is empty & nums1 is not empty
            if (flag) {
                return (double)nums1[size/2];
            } else {
                return ((double)(nums1[size/2]) + (double)(nums1[size/2 - 1]));
            }
        }

        if (!nums1.empty() && !nums2.empty()) { // nums1 is not empty & nums2 is not empty
            // median = nums1[0] < nums2[0] ? nums1[0] : nums2[0];
            vector<int>::iterator inums1 = nums1.begin();
            vector<int>::iterator inums2 = nums2.begin();

            // initial median
            pre_median = 0;
            median = (*inums1 <= *inums2) ? *inums1 : *inums2;
            while (index < size/2) {
                index ++;
                if (*inums1 <= *inums2) {
                    if (inums1 < nums1.end()) {
                        inums1++;
                    }
                } else {
                    if (inums2 < nums2.end()) {
                        inums2++;
                    }
                }
                pre_median = median;
                median = (*inums1 <= *inums2)?(double)(*inums1):(double)(*inums2);
            }
            if (!flag) {
                median = (median + pre_median)/2;
            }
            return median;
        }
        return 0;
    }
};
// @lc code=end

