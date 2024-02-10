/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-09
 * Repository: develop
 * Description:
 **********************************
 */
#include <iostream>
#include "two_sum_solution.hpp"
#include "add_two_numbers_solution.hpp"
#include "longest_substring_without_repeating_characters.hpp"
#include "median_of_two_sorted_arrays.hpp"

int main(int argc, char *argv[])
{
	/*
	 * 1. Two Sum
	 */
	std::vector<int> nums = {2, 7, 11, 15};
	std::vector<int> res1;
	int target = 9;

	res1 = two_sum_solution::twoSum(nums,target);

	std::cout << "Results of TwoSum is -> " << res1[0] << " & " << res1[1] << "\n";

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

	/*
	 * 2. Add Two Numbers
	 */
	ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
	ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

	ListNode *res2 =add_two_numbers_solution::addTwoNumbers(l1, l2);

    // Print the values of the resulting linked list
	std::cout << "Results of AddTwoNumbers is -> ";
    while (res2) {
        std::cout << res2->val << " ";
        res2 = res2->next;
    }
    std::cout << "\n";


    const std::string inputString = "pwwkew";
    int res3 = 0;

    res3 = longest_substring_without_repeating_chars_solution::lengthOfLongestSubstring(inputString);

    std::cout << "Results for Longest Substring Without Repeating Characters is -> " << res3 << std::endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

	/*
	 * 4.Median of Two Sorted Arrays.
	 */
    std::vector<int> nums1 = {1,2};
    std::vector<int> nums2 = {3,4};
    std::vector<int> nums3 = {1,3};
    std::vector<int> nums4 = {2};

    double median1;
    double median2;

    median1 = median_of_two_sorted_arrays_solution::findMedianSortedArrays(nums1, nums2);
    median2 = median_of_two_sorted_arrays_solution::findMedianSortedArrays(nums3, nums4);

    std::cout << "Results for Median Of Two Sorted Arrays 1 -> " << median1 << std::endl;
    std::cout << "Results for Median Of Two Sorted Arrays 2 -> " << median2 << std::endl;


}

