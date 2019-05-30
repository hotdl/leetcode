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
#include "lt0028.cpp"
#include "lt0035.cpp"
#include "lt0038.cpp"
#include "lt0012.cpp"
#include "lt0015.cpp"
#include "lt0016.cpp"
#include "lt0017.cpp"
#include "lt0018.cpp"
#include "lt0019.cpp"
#include "lt0022.cpp"
#include "lt0024.cpp"
#include "lt0029.cpp"
#include "lt0031.cpp"
#include "lt0033.cpp"
#include "lt0034.cpp"
#include "lt0036.cpp"
#include "lt0039.cpp"
#include "lt0040.cpp"
#include "lt0043.cpp"
#include "lt0046.cpp"
#include "lt0047.cpp"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

//    lt0001::Solution solution;
//    vector<int> nums{1, 2, 3};
//    vector<int> res = solution.twoSum(nums, 3);
//    cout << res{0} << "," << res{1} << endl;

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

//    lt0028::Solution solution;
//    cout << solution.strStr("aaa", "aaaa") << endl;

//    lt0035::Solution solution;
//    vector<int> input{1,3};
//    cout << solution.searchInsert(input, 4) << endl;

//    lt0012::Solution solution;
//    cout << solution.intToRoman(3999) << endl;

//    lt0015::Solution solution;
//    vector<int> nums{0, 0, 0, 0};
//    auto output = solution.threeSum(nums);
//    for (int i = 0; i < output.size(); i++) {
//        for (int j = 0; j < output{i}.size(); j++) {
//            cout << output{i}{j} << endl;
//        }
//    }

//    lt0016::Solution solution;
//    vector<int> nums{1,1,1,1};
//    cout << solution.threeSumClosest(nums, -100) << endl;

//    lt0017::Solution solution;
//    vector<string> output = solution.letterCombinations("23");
//    for (int i = 0; i < output.size(); i++) {
//        cout << output{i} << endl;
//    }

//    lt0018::Solution solution;
//    vector<int> input{1, 0, -1, 0, -2, 2};
//    auto output = solution.fourSum(input, 0);
//    for (auto item : output) {
//        for (auto sub_item: item) {
//            cout << sub_item << " ";
//        }
//        cout << endl;
//    }

//    lt0019::Solution solution;
//    ListNode *input = new ListNode(1);
//    input->next = new ListNode(2);
//    input->next->next = new ListNode(3);
//    input->next->next->next = new ListNode(4);
//    input->next->next->next->next = new ListNode(5);
//    ListNode *output = solution.removeNthFromEnd(input, 0);
//    ListNode *tmp = output;
//    while (tmp != NULL) {
//        cout << tmp->val << endl;
//        tmp = tmp->next;
//    }

//    lt0022::Solution solution;
//    vector<string> output = solution.generateParenthesis(5);
//    for (string s: output) {
//        cout << s << endl;
//    }

//    lt0024::Solution solution;
//    ListNode *input = new ListNode(1);
//    input->next = new ListNode(2);
//    input->next->next = new ListNode(3);
//    input->next->next->next = new ListNode(4);
//    ListNode *output = solution.swapPairs(input);
//    ListNode *tmp = output;
//    while (tmp->next) {
//        cout << tmp->val << "->";
//        delete tmp;
//        tmp = tmp->next;
//    }
//    cout << tmp->val << endl;
//    delete tmp;

//    lt0029::Solution solution;
//    cout << solution.divide(1004958205, -2137325331) << endl;

//    lt0031::Solution solution;
//    vector<int> input{1,1,1};
//    solution.nextPermutation(input);
//    for (int item: input) {
//        cout << item << endl;
//    }

//    lt0033::Solution solution;
//    vector<int> input{4, 5, 1, 2, 3};
//    cout << solution.search(input, 1) << endl;

//    lt0034::Solution solution;
//    vector<int> input{2, 2};
//    vector<int> output = solution.searchRange(input, 2);
//    for (int value: output) {
//        cout << value << endl;
//    }

//    lt0036::Solution solution;
//    vector<vector<char>> input{
//            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
//    };
//    cout << solution.isValidSudoku(input) << endl;

//    lt0039::Solution solution;
//    vector<int> candidates{2, 3,6,7};
//    vector<vector<int>> output = solution.combinationSum(candidates, 7);
//    for (vector<int> subItem : output) {
//        for (int subItem2: subItem) {
//            cout << subItem2 << " ";
//        }
//        cout << endl;
//    }

//    lt0040::Solution solution;
//    vector<int> canditates{110,1,2,7,6,1,5};
//    vector<vector<int>> output = solution.combinationSum2(canditates, 8);
//    for (vector<int> subItem : output) {
//        for (int subItem2: subItem) {
//            cout << subItem2 << " ";
//        }
//        cout << endl;
//    }

//    lt0043::Solution solution;
//    cout << solution.multiply("0", "340") << endl;

//    lt0046::Solution solution;
//    vector<int> input{1,2,3,4};
//    vector<vector<int>> output = solution.permute(input);
//    for (vector<int> item1 : output) {
//        for (int item2 : item1) {
//            cout << item2 << " ";
//        }
//        cout << endl;
//    }

    lt0047::Solution solution;
    vector<int> input{0, 1, 0, 0, 9};
    vector<vector<int>> output = solution.permuteUnique(input);
    for (vector<int> item1 : output) {
        for (int item2 : item1) {
            cout << item2 << " ";
        }
        cout << endl;
    }

    return 0;
}