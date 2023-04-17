/*
 * 문제 풀이 일시 : 2023-04-17
 * 문제 사이트 : 프로그래머스
 * 난이도 : Level 2
 * 문제 번호 : 12909
 * 문제 제목 : 올바른 괄호
 */

#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> st;

    for (char chr : s) {
        if (st.empty() && chr == ')') {
            answer = false;
            break;
        }
        if (chr == '(') {
            st.push(chr);
        } else {
            st.pop();
        }
    }
    if (!st.empty()) {
        answer = false;
    }

    return answer;
}