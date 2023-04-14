/*
 * 문제 풀이 일시 : 2023-04-14
 * 문제 사이트 : 백준
 * 난이도 : Silver 4
 * 문제 번호 : 1620
 * 문제 제목 : 나는야 포켓몬 마스터 이다솜
 */
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
int N, M;
map<int, string> poketmonMap;
map<string, int> poketmonMapReverse;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;

	for (int n = 1; n <= N; n++) {
		string name;
		cin >> name;

		poketmonMap.insert({ n,name });
		poketmonMapReverse.insert({ name,n });
	}

	for (int m = 0; m < M; m++) {
		string findStr;
		cin >> findStr;

		if (findStr[0] >= '0' && findStr[0] <= '9') {
			cout << poketmonMap[stoi(findStr)] << "\n";
		} else {
			cout << poketmonMapReverse[findStr] << "\n";
		}
	}
}