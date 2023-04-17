/*
 * ���� Ǯ�� �Ͻ� : 2023-04-17
 * ���� ����Ʈ : ���α׷��ӽ�
 * ���̵� : Level 2
 * ���� ��ȣ : 12941
 * ���� ���� : �ּҰ� �����
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