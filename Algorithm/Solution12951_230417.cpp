/*
 * ���� Ǯ�� �Ͻ� : 2023-04-17
 * ���� ����Ʈ : ���α׷��ӽ�
 * ���̵� : Level 2
 * ���� ��ȣ : 12951
 * ���� ���� : JadenCase ���ڿ� �����
 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer;
    bool isFirst = false;

    for (char str : s) {
        if (str == ' ') {
            answer += " ";
            isFirst = false;
        } else if (str >= '0' && str <= '9') {
            answer += str;
            isFirst = true;
        } else {
            if (!isFirst) {
                answer += toupper(str);
                isFirst = true;
            } else {
                answer += tolower(str);
            }
        }
    }

    return answer;
}