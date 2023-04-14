/*
 * ���� Ǯ�� �Ͻ� : 2023-04-14
 * ���� ����Ʈ : ����
 * ���̵� : Silver 3
 * ���� ��ȣ : 1003
 * ���� ���� : �Ǻ���ġ �Լ�
 */
#include <iostream>
#include <vector>

using namespace std;

vector<pair<long long, long long>> vPair((41,41));

pair<long long, long long> fibo(int n) {
	if (vPair[n].first != 0 || vPair[n].second != 0) {
		return vPair[n];
	}
	pair<long long, long long> first = fibo(n - 1);
	pair<long long, long long> second = fibo(n - 2);

	vPair[n].first += first.first + second.first;
	vPair[n].second += first.second + second.second;

	return vPair[n];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int testCase = 0;
	cin >> testCase;

	vPair[0].first = 1;
	vPair[1].second = 1;
	vPair[2].first = 1;
	vPair[2].second = 1;

	pair<long long, long long> result;
	
	for (int t = 0; t < testCase; t++) {
		int num = 0;

		cin >> num;

		result = fibo(num);
		cout << result.first << " " << result.second << "\n";
	}
}