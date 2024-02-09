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

int main(int argc, char *argv[])
{
	/*
	 * 1. Two Sum
	 */
	std::vector<int> nums = {2, 7, 11, 15};
	std::vector<int> res;
	int target = 9;

	res = two_sum_solution::twoSum(nums,target);

	std::cout << "Results of TwoSum is -> " << res[0] << " & " << res[1];

	/*
	 * 2. Add Two Numbers
	 */

}

