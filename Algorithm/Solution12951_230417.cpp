/*
 * 문제 풀이 일시 : 2023-04-17
 * 문제 사이트 : 프로그래머스
 * 난이도 : Level 2
 * 문제 번호 : 12951
 * 문제 제목 : JadenCase 문자열 만들기
 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer;
    bool isFirst = false;

    for (char str : s) {
        if (str == ' ') {
            answer += " ";
            isFirst = false;
        } else if (str >= '0' && str <= '9') {
            answer += str;
            isFirst = true;
        } else {
            if (!isFirst) {
                answer += toupper(str);
                isFirst = true;
            } else {
                answer += tolower(str);
            }
        }
    }

    return answer;
}