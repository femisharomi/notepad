/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-09
 * Repository: develop
 * Description:Given an array of integers nums and an integer target, return indices of the two numbers
 * 				such that they add up to target.
 **********************************
 */
#ifndef TWO_SUM_SOLUTION_HPP
#define TWO_SUM_SOLUTION_HPP

#include <vector>

class two_sum_solution
{
public:

    /*
     * This function given an array of integers 'nums' and an integer 'target',
     * return indices of the two numbers such that they add up to target.
    */
    inline static std::vector<int> twoSum(std::vector<int>& nums, int target){
    	int a = 0;
    	int b = 0;

    	for(int i = 0; i < nums.size()-1; i++)
    	{
    		for(int j = i+1; j < nums.size(); j++)
    		{
    			if(nums[i] + nums[j] == target)
    			{
    				a = i;
    				b = j;
    			}
    		}
    	}
    	return {a,b};
    }

};

#endif // TWO_SUM_SOLUTION_HPP
