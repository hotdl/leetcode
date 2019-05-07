//
// Created by Hotdl on 2019/5/7.
//

#include <stack>

namespace lt0020 {
    class Solution {
    public:
        bool isValid(string s) {
            if (s.size() % 2 == 1) return false;
            stack<char> st;
            for(char c : s) {
                switch(c) {
                    case '(':
                    case '[':
                    case '{':
                        st.push(c);
                        break;
                    case ')':
                        if (st.empty() || st.top() != '(') return false;
                        st.pop();
                        break;
                    case ']':
                        if (st.empty() || st.top() != '[') return false;
                        st.pop();
                        break;
                    case '}':
                        if (st.empty() || st.top() != '{') return false;
                        st.pop();
                        break;
                    default:
                        return false;
                }
            }
            return st.empty();
        }
    };
}