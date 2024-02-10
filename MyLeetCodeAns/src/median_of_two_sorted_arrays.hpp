/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-09
 * Repository: develop
 * Description: Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
 **********************************
 */

#include <vector>

#ifndef MEDIAN_OF_TWO_SORTED_ARRAYS_HPP
#define MEDIAN_OF_TWO_SORTED_ARRAYS_HPP

class median_of_two_sorted_arrays_solution
{
public:
    inline static double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    	double median;
    	int midNum;

    	nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    	std::sort(nums1.begin(),nums1.end());

    	midNum = nums1.size()/2;

    	if(nums1.size() % 2 == 0)
    	{
    		median = (nums1[midNum-1] + nums1[midNum]) / 2.0;
    	}
    	else
    	{
    		median = nums1[midNum];
    	}

    	return median;
    }

};

#endif // MEDIAN_OF_TWO_SORTED_ARRAYS_HPP
