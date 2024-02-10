/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-09
 * Repository: develop
 * Description:
 **********************************
 */

#ifndef ADD_TWO_NUMBERS_HPP
#define ADD_TWO_NUMBERS_HPP

struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class add_two_numbers_solution {
public:

	inline static ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

		ListNode *result = new ListNode(0);
		ListNode *pointA = l1, *pointB = l2, *current = result;
		int carry = 0;

		while(pointA != nullptr || pointB  != nullptr)
		{
			int x = (pointA != nullptr) ? pointA->val : 0;
			int y = (pointB != nullptr) ? pointB->val : 0;
			int sum = x + y + carry;

			carry = sum/10;
			current->next = new ListNode(sum % 10);
			current = current->next;

			if(pointA != nullptr) pointA = pointA->next;
			if(pointB != nullptr) pointB = pointB->next;
		}

		if (carry > 0) {
			current->next = new ListNode(carry);
		}

		return result->next;
    }

};
#endif // ADD_TWO_NUMBERS_HPP
