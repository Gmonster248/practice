// G���� ���ؽ� ���� ���α׷�

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    string T;
	cout << "����� ���ؽ��Դϱ�? (��, �ƴϿ�)" << endl; // �� ���ؽ��̴�?
	cin >> T; // ���� ���� �Է���
	if (T == "��") { // ��¥ ���ؽ���?
		cout << "���� ���� ����� �Ѽ���.\n";
		Sleep(2000);
		cout << "����Դϴ�.����"<< endl;
	}
	else if (T == "�ƴϿ�") { // ���ؽ��� �ƴϱ���?
		cout << "�׷� ���� �Ӹ�" << endl;
	}
	else { // ����°ſ�
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
}