﻿#include <iostream>
using namespace std; 

// TextRPG

enum PlayerType {
	PT_Knight =1,
	PT_Archer = 2,
	PT_Mage =3,
};

enum MonsterType {
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};

int playerType;
int hp;
int attack;
int defense;

int monsterType;
int monsterhp;
int monsterattack;
int monsterdefense;

void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomMonster();

int main()
{
	//랜덤시드 설정
	srand(time(0));
	EnterLobby();

	return 0; 
}

void EnterLobby() {
	while (true) {
		cout << "--------------" << endl;
		cout << "로비에 입장했습니다!" << endl;
		cout << "--------------" << endl;

		//플레이어 직업 선택 
		SelectPlayer();

		cout << "--------------" << endl;
		cout << "(1) 필드 입장 (2) 게임 종료" << endl;
		cout << "--------------" << endl;

		int input;
		cin >> input;

		if (input == 1) {
			EnterField();
		}
		else {
			return;
		}

	}
}
	void SelectPlayer(){
		while (true) {
			cout << "--------------" << endl;
			cout << "직업을 골라주세요!" << endl;
			cout << "(1) 기사 (2) 궁수 (3) 법사" << endl;
			cout << "> ";

			cin >> playerType;

			if (playerType = PT_Knight) {
				cout << "기사 생성중... !" << endl;
				hp = 150;
				attack = 10;
				defense = 5;
				break;
			}
			else if (playerType = PT_Archer) {
				cout << "궁수 생성중... !" << endl;
				hp = 100;
				attack = 15;
				defense = 3;
				break;
			}
			else if (playerType = PT_Mage) {
				cout << "법사 생성중... !" << endl;
				hp = 80;
				attack = 25;
				defense = 0;
				break;
			}
		}
	}

	void EnterField() {
		while (true) {
			cout << "--------------" << endl;
			cout << "필드에 입장했습니다!" << endl;
			cout << "--------------" << endl;

			cout << "[PLAYER] HP : " << hp << " / ATT : " << attack << " / DEF : " << defense << endl;

			CreateRandomMonster();

		}
	}

	void CreateRandomMonster() {
		// 1-3
		monsterType = 1 + (rand() % 3); 
		
		switch (monsterType)
		{
		case MT_Slime:
			cout << "슬라임 생성중..! (HP:15 / ATT:5 / DEF:0)" << endl;
			monsterhp = 15;
			monsterattack = 5;
			monsterdefense = 0;
			break;
		case MT_Orc:
			cout << "오크 생성중..! (HP:40 / ATT:10 / DEF:3)" << endl;
			monsterhp = 40;
			monsterattack = 10;
			monsterdefense = 3;
			break;
		case MT_Skeleton:
			cout << "스켈레톤 생성중..! (HP:80 / ATT:15 / DEF:5)" << endl;
			monsterhp = 80;
			monsterattack = 15;
			monsterdefense = 5;
			break;

		}

	}


