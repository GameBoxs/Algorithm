/*
 * 문제 풀이 일시 : 2023-04-15
 * 문제 사이트 : 백준
 * 난이도 : Silver 4
 * 문제 번호 : 1764
 * 문제 제목 : 듣보잡
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
vector<string> nV;
vector<string> result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		nV.push_back(str);
	}
	sort(nV.begin(), nV.end());
	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;

		if (binary_search(nV.begin(), nV.end(), str)) {
			result.push_back(str);
		}
	}
	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (string str : result) {
		cout << str << "\n";
	}
}