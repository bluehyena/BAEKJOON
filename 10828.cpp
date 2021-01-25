/*
������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� �ټ� �����̴�.

push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����,
100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.

����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	stack<int> st;
	int num;

	cin >> num;

	for (int i = 0; i < num; ++i) {
		
		string commend;
		cin >> commend;

		if (commend == "push") { //push
			int num;
			cin >> num;
			st.push(num);
		}
		else if (commend[0] == 'p' && commend[1]) { //pop
			if (st.size() > 0) {
				cout << st.top() << '\n';
				st.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (commend[0] == 'e') { //empty
			if (st.empty() == true) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (commend[0] == 's') { //size
			cout << st.size() << '\n';
		}
		else if (commend[0] == 't') { //top
			if (st.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
		}
	}
	return 0;
}