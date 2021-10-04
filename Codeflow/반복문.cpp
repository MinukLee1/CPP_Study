#include <iostream>
using namespace std;

// 반복문 

int main()
{ 
	// while 
	// if -else 
	// BUT, 한 번만을 실행하는것이아닌 특정 조건까지 계속 반복하는 상황 
	// ex) 게임을 끌떄까지 계속 게임을 실행해라.  ~ 
	int count = 0;
	int round = 1;
	int hp = 100;
	int damage = 30;

	while (count < 5) {
		cout << "Hello World" << endl;
		count++;
	}
	
	do {
		cout << "Hello World" << endl;
	} while (false);

	for (int count = 0; count < 5; count++) {
		cout << "Hello World" << endl; 
	}

	// loop문의 흐름제어 : break , continue 
	while (true) {
		hp -= damage;
		if (hp < 0)
			hp = 0; // 음수 체력을 0으로 보정

		// 시스템 메시지 
		cout << "Round" << round << "몬스터 체력" << hp << endl;
		if (hp == 0) {
			cout << "몬스터 처치" << endl;
			break;
		}
		if (round == 5) {
			cout << "제한 라운드 종료" << endl;
			break;
		}
		count++;
	}

}
