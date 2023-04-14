/*
 * ���� Ǯ�� �Ͻ� : 2023-04-14
 * ���� ����Ʈ : ����
 * ���̵� : Silver 2
 * ���� ��ȣ : 1927
 * ���� ���� : �ּ� ��
 */
#include <iostream>
#include <queue>

using namespace std;

int N;
// priority_queue<int> �� �⺻������ �������� ( ū���� -> ���� ���� )
// ������ �Ʒ��� �ڵ� ó�� �ۼ� �� �ø��������� �� (�������� -> ū ����)
priority_queue<int, vector<int>, greater<int>> pq;

void zero() {
	if (pq.empty()) {
		cout << 0 << "\n";
	} else {
		cout << pq.top() << "\n";
		pq.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N;

	for (int t = 0; t < N; t++) {
		int number;
		cin >> number;

		if (number == 0) {
			zero();
		} else {
			pq.push(number);
		}
	}
}