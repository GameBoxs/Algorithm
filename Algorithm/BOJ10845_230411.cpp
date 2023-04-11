/*
 * 문제 풀이 일시 : 2023-04-11
 * 문제 사이트 : 백준
 * 난이도 : Silver 4
 * 문제 번호 : 10845
 * 문제 제목 : 큐
 */
#include <iostream>
#include <queue>

using namespace std;

int cnt = 0;
string str = "";
queue<int> que;
queue<int> resultQue;

void push(int num) {
    que.push(num);
}

int size() {
    return que.size();
}

int empty() {
    return que.empty() ? 1 : 0;
}

int pop() {
    int num = -1;
    if (empty() == 0) {
        num = que.front();
        que.pop();
    }
    return num;
}

int front() {
    return empty() == 1 ? -1 : que.front();
}

int back() {
    return empty() == 1 ? -1 : que.back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> cnt;

    for (int t = 0; t < cnt; t++) {
        cin >> str;

        if (str == "push") {
            int num = 0;
            cin >> num;
            push(num);
        }
        else if (str == "pop") {
            resultQue.push(pop());
        }
        else if (str == "size") {
            resultQue.push(size());
        }
        else if (str == "empty") {
            resultQue.push(empty());
        }
        else if (str == "front") {
            resultQue.push(front());
        }
        else {
            resultQue.push(back());
        }
    }

    while (!resultQue.empty()) {
        int temp = resultQue.front();
        resultQue.pop();
        cout << temp << "\n";
    }
}