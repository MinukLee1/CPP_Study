#include <iostream>
using namespace std;
int main()
{
	// 가위바위보 
	const int SCISSORS = 1;
	const int ROCK = 2;
	const int PAPER = 3;

	int wins = 0;
	int total = 0;
	srand(time(0)); /// 시드 설정

	while (1) {
		cout << "가위(1), 바위(2), 보(3) 를 선택하세요!" << endl;

		if (total == 0) {
			cout << "현재 승률 : 없음" << endl;
		}
		else {
			// 나눗셈값이 0? -> float 실수형으로 변환하여야함 (c++ 특성)
			// or, 먼저 100을 곱해준 후 계산
			cout << "현재 승률 : " << wins*100 / total << "%" << endl;
		}
		//플레이어
		int playervalue;
		cin >> playervalue;

		int computervalue = 1 + (rand() % 3); // 0~ 32767 % 3 -> 나머지 : 1 2 3 : 1/3 추출

		if (playervalue == ROCK) {
			switch (computervalue) {
			case SCISSORS:
				cout << "플레이어(바위)가 컴퓨터(가위)를 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			case ROCK:
				cout << "플레이어(바위)가 컴퓨터(바위)와 비겼습니다!" << endl;
				total++;
				break;
			case PAPER:
				cout << "플레이어(바위)가 컴퓨터(보)에 패배했습니다!" << endl;
				total++;
				break;
			}
		}
		else if (playervalue == SCISSORS) {
			switch (computervalue) {
			case SCISSORS:
				cout << "플레이어(가위)가 컴퓨터(가위)와 비겼습니다!" << endl;
				total++;
				break;
			case ROCK:
				cout << "플레이어(가위)가 컴퓨터(바위)에 패배했습니다!" << endl;
				total++;
				break;
			case PAPER:
				cout << "플레이어(가위)가 컴퓨터(보)를 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			}
		}
		else if (playervalue == PAPER) {
			switch (computervalue) {
			case SCISSORS:
				cout << "플레이어(보)가 컴퓨터(가위)에 패배했습니다!" << endl;
				total++;
				break;
			case ROCK:
				cout << "플레이어(보)가 컴퓨터(바위)를 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			case PAPER:
				cout << "플레이어(보)가 컴퓨터(보)와 비겼습니다!" << endl;
				total++;
				break;
			}
		}

	
	}


}
