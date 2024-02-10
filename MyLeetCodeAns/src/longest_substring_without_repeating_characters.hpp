/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-09
 * Repository: develop
 * Description: Given a string s, find the length of the longest substring without repeating characters.
 **********************************
 */

#include <string>
#include <iostream>
#include <unordered_set>

#ifndef LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_HPP
#define LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_HPP

class longest_substring_without_repeating_chars_solution
{
public:

   inline static int lengthOfLongestSubstring(std::string s) {
    	int n = s.length();
    	    int maxLength = 0, left = 0, right = 0;
    	    std::unordered_set<char> charSet;

    	    while (right < n) {
    	        if (charSet.find(s[right]) == charSet.end()) {
    	            charSet.insert(s[right]);
    	            maxLength = std::max(maxLength, right - left + 1);
    	            right++;
    	        } else {
    	            charSet.erase(s[left]);
    	            left++;
    	        }
    	    }

    	    return maxLength;
    }

};

#endif // LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_HPP
