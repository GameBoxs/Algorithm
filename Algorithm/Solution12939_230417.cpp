/*
 * ���� Ǯ�� �Ͻ� : 2023-04-17
 * ���� ����Ʈ : ���α׷��ӽ�
 * ���̵� : Level 2
 * ���� ��ȣ : 12939
 * ���� ���� : �ִ밪�� �ּҰ�
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