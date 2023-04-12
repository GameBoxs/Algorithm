/*
 * 문제 풀이 일시 : 2023-04-12
 * 문제 사이트 : 백준
 * 난이도 : Silver 4
 * 문제 번호 : 15828
 * 문제 제목 : Router
 */

#include <iostream>
#include <queue>

using namespace std;

queue<int> que;
int queSize = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> queSize;

	while (true) {
		int command = 0;
		cin >> command;

		if (command == -1) {
			if (que.empty()) {
				cout << "empty";
			}
			else {
				while (!que.empty()) {
					cout << que.front() ;
					if (que.size() > 1) {
						cout << " ";
					}
					que.pop();
				}
			}
			break;
		}
		else {
			if (command != 0) {
				if (que.size() < queSize) {
					que.push(command);
				}
			}
			else {
				que.pop();
			}
		}
	}
}
