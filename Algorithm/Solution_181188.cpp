/*
 * ���� Ǯ�� �Ͻ� : 2023-04-16
 * ���� ����Ʈ : ���α׷��ӽ�
 * ���̵� : Level 2
 * ���� ��ȣ : 181188
 * ���� ���� : ��ݽý���
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