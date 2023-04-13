/*
 * 문제 풀이 일시 : 2023-04-13
 * 문제 사이트 : 백준
 * 난이도 : Silver 1
 * 문제 번호 : 2504
 * 문제 제목 : 괄호의 값
 */

#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string str;

	cin >> str;
	
	int result = 0;
	int tempN = 1;
	for (int i = 0; i < str.size(); i++) {
		char ch = str[i];

		/*
		* ( ) [ ] 이외의 입력이 주어지면 잘못된 입력으로 처리
		*/
		if (ch != '(' && ch != '[' && ch != ')' && ch != ']') {
			result = 0;
			break;
		}

		if (ch == '(') {
			tempN *= 2;
			st.push(ch);
		} else if (ch == '[') {
			tempN *= 3;
			st.push(ch);
		} else if (ch == ')') {
			// 스택이 비어있는데 )이 들어오거나 스택의 가장 위가 (가 아니라면 잘못된 입력임
			if (st.empty() || st.top() != '(') {
				result = 0;
				break;
			} else if (str[i - 1] == '(') {
				// 이전의 문자열이 (라면 바로 닫힌것 이므로 결과값에 현재 값을 더해줌
				result += tempN;
			}
			// 나누기 2
			tempN /= 2;
			// 스택 빼주기
			st.pop();
		} else if (ch == ']') {
			if (st.empty() || st.top() != '[') {
				result = 0;
				break;
			} else if (str[i - 1] == '[') {
				result += tempN;
			}
			tempN /= 3;
			st.pop();
		}
	}
	if (st.empty())
		cout << result;
	else
		cout << "0";
}