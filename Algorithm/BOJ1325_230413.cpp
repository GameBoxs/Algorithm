/*
 * 문제 풀이 일시 : 2023-04-13
 * 문제 사이트 : 백준
 * 난이도 : Silver 1
 * 문제 번호 : 1325
 * 문제 제목 : 효율적인 해킹
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int maxCnt = 0;
vector<int> result;
vector<vector <int>> v(10001);
vector<bool> visit(10001, false);

int DFS(int nodeNumber, int returnCnt) {
	if (visit[nodeNumber] == true) {
		return NULL;
	}
	else {
		visit[nodeNumber] = true;
	}
	returnCnt += 1;

	for (int i = 0; i < v[nodeNumber].size(); i++) {
		int temp = DFS(v[nodeNumber][i], returnCnt);
		if (temp > returnCnt) {
			returnCnt = temp;
		}
	}
	return returnCnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;

		v[end].push_back(start);
	}

	for (int i = 1; i <= N; i++) {
		int num = DFS(i, 0);
		if (num > maxCnt) {
			maxCnt = num;
			result.clear();
			result.push_back(i);
		}
		else if (num == maxCnt) {
			result.push_back(i);
		}
		fill(visit.begin(), visit.end(), false);
	}
	sort(result.begin(), result.end());
	reverse(result.begin(), result.end());

	while (!result.empty()) {
		cout << result.back() << " ";
		result.pop_back();
	}
}