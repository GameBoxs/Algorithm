/*
 * 문제 풀이 일시 : 2023-04-17
 * 문제 사이트 : 프로그래머스
 * 난이도 : Level 2
 * 문제 번호 : 12939
 * 문제 제목 : 최대값과 최소값
 */

#include <string>
#include <vector>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> v;
    istringstream ss(s);
    string str;
    while (getline(ss, str, ' ')) {
        v.push_back(stoi(str));
    }
    sort(v.begin(), v.end());
    string answer = "";
    answer += to_string(v[0]) + " " + to_string(v[v.size() - 1]);
    return answer;
}