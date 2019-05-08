#include <iostream>

#include "common.h"

#include "lt0001.cpp"
#include "lt0007.cpp"
#include "lt0009.cpp"
#include "lt0013.cpp"
#include "lt0014.cpp"
#include "lt0020.cpp"
#include "lt0021.cpp"
#include "lt0002.cpp"
#include "lt0003.cpp"
#include "lt0026.cpp"
#include "lt0027.cpp"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

//    lt0001::Solution solution;
//    vector<int> nums{1, 2, 3};
//    vector<int> res = solution.twoSum(nums, 3);
//    cout << res[0] << "," << res[1] << endl;

//    lt0007::Solution solution;
//    cout << solution.reverse(1) << endl;

//    lt0009::Solution solution;
//    cout << (solution.isPalindrome(2147483649) ? "True" : "False") << endl;

//    lt0013::Solution solution;
//    cout << solution.romanToInt("MCMXCIV") << endl;

//    lt0014::Solution solution;
//    vector<string> str_vec{"12", "12"};
//    cout << solution.longestCommonPrefix(str_vec) << endl;

//    lt0020::Solution solution;
//    cout << solution.isValid("((") << endl;

//    lt0021::Solution solution;
//    ListNode l11(1);
//    ListNode l12(2);
//    ListNode l13(4);
//    l11.next = &l12;
//    l12.next = &l13;
//    ListNode l21(1);
//    ListNode l22(3);
//    ListNode l23(4);
//    l21.next = &l22;
//    l22.next = &l23;
//    ListNode* output = solution.mergeTwoLists(&l11, &l21);
//    ListNode* ptr = output;
//    while(ptr->next != NULL) {
//        cout << ptr->val << "->";
//        ptr = ptr->next;
//    }
//    cout << ptr->val << endl;

//    lt0002::Solution solution;
//    ListNode l11(2);
//    ListNode l12(4);
//    ListNode l13(3);
//    l11.next = &l12;
//    l12.next = &l13;
//    ListNode l21(5);
//    ListNode l22(6);
//    ListNode l23(7);
//    l21.next = &l22;
//    l22.next = &l23;
//    ListNode* output = solution.addTwoNumbers(&l11, &l21);
//    ListNode* ptr = output;
//    while(ptr->next != NULL) {
//        cout << ptr->val << "->";
//        ptr = ptr->next;
//    }
//    cout << ptr->val << endl;

//    lt0003::Solution solution;
//    cout << solution.lengthOfLongestSubstring("abba") << endl;

//    lt0026::Solution solution;
//    vector<int> input{1, 1, 2, 3, 3};
//    cout << solution.removeDuplicates(input) << endl;

    lt0027::Solution solution;
    vector<int> input{1, 1, 2, 3, 3};
    cout << solution.removeElement(input, 3) << endl;

    return 0;
}