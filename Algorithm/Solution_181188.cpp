/*
 * 문제 풀이 일시 : 2023-04-16
 * 문제 사이트 : 프로그래머스
 * 난이도 : Level 2
 * 문제 번호 : 181188
 * 문제 제목 : 요격시스템
 */
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> v, vector<int> v2) {
    return v[1] < v2[1];
}

int solution(vector<vector<int>> targets) {
    sort(targets.begin(), targets.end(), cmp);
    int e = 0;
    int answer = 0;
    for (int i = 0; i < targets.size(); i++) {
        if (targets[i][0] >= e) {
            answer += 1;
            e = targets[i][1];
        }
    }
    return answer;
}