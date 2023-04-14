/*
 * 문제 풀이 일시 : 2023-04-14
 * 문제 사이트 : 백준
 * 난이도 : Silver 2
 * 문제 번호 : 1927
 * 문제 제목 : 최소 힙
 */
#include <iostream>
#include <queue>

using namespace std;

int N;
// priority_queue<int> 는 기본적으로 내림차순 ( 큰숫자 -> 작은 숫자 )
// 하지만 아래줄 코드 처럼 작성 시 올림차순으로 됨 (작은숫자 -> 큰 숫자)
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