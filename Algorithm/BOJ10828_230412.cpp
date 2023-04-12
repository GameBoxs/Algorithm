/*
 * 문제 풀이 일시 : 2023-04-12
 * 문제 사이트 : 백준
 * 난이도 : Silver 4
 * 문제 번호 : 10828
 * 문제 제목 : 스택
 */
#include <iostream>
#include <stack>

using namespace std;

int cnt = 0;
stack<int> st;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> cnt;

	for (int t = 0; t < cnt; t++) {
		string command = "";
		cin >> command;

		if (command == "push") {
			int number = 0;
			cin >> number;
			st.push(number);
		}
		else if (command == "pop") {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (command == "size") {
			cout << st.size() << "\n";
		}
		else if (command == "empty") {
			cout << (st.empty() ? 1 : 0) << "\n";
		}
		else {
			cout << (st.empty() ? -1 : st.top()) << "\n";
		}
	}
}