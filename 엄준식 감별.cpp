// G몬의 엄준식 감별 프로그램

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    string T;
	cout << "당신은 엄준식입니까? (네, 아니요)" << endl; // 넌 엄준식이니?
	cin >> T; // 지금 당장 입력해
	if (T == "네") { // 진짜 엄준식임?
		cout << "지금 당장 방송을 켜세요.\n";
		Sleep(2000);
		cout << "농담입니다.ㅋㅋ"<< endl;
	}
	else if (T == "아니요") { // 엄준식이 아니구만?
		cout << "그럼 나가 임마" << endl;
	}
	else { // 뭐라는거여
		cout << "잘못 입력하셨습니다." << endl;
	}
}