#include <iostream>

#include "lt0001.cpp"
#include "lt0007.cpp"
#include "lt0009.cpp"
#include "lt0013.cpp"

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

    lt0013::Solution solution;
    cout << solution.romanToInt("123") << endl;

    return 0;
}