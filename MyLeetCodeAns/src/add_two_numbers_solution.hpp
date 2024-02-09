/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-09
 * Repository: develop
 * Description:
 **********************************
 */
//You are given two non-empty linked lists representing two non-negative integers.
//The digits are stored in reverse order,
//and each of their nodes contains a single digit.
//Add the two numbers and return the sum as a linked list.

#ifndef ADD_TWO_NUMBERS_HPP
#define ADD_TWO_NUMBERS_HPP

struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode* result = new ListNode(0);


		return result;
    }

};
#endif // ADD_TWO_NUMBERS_HPP
