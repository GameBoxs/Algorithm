/*
 * 문제 풀이 일시 : 2023-04-17
 * 문제 사이트 : 프로그래머스
 * 난이도 : Level 2
 * 문제 번호 : 12941
 * 문제 제목 : 최소값 만들기
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    while (!A.empty()) {
        answer += A.front() * B.back();
        A.erase(A.begin());
        B.pop_back();
    }

    return answer;
}