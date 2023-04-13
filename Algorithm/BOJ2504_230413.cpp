/*
 * ���� Ǯ�� �Ͻ� : 2023-04-13
 * ���� ����Ʈ : ����
 * ���̵� : Silver 1
 * ���� ��ȣ : 2504
 * ���� ���� : ��ȣ�� ��
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
		* ( ) [ ] �̿��� �Է��� �־����� �߸��� �Է����� ó��
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
			// ������ ����ִµ� )�� �����ų� ������ ���� ���� (�� �ƴ϶�� �߸��� �Է���
			if (st.empty() || st.top() != '(') {
				result = 0;
				break;
			} else if (str[i - 1] == '(') {
				// ������ ���ڿ��� (��� �ٷ� ������ �̹Ƿ� ������� ���� ���� ������
				result += tempN;
			}
			// ������ 2
			tempN /= 2;
			// ���� ���ֱ�
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