﻿#include <iostream>
using namespace std;

// TextRPG

enum PlayerType {
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,
};

enum MonsterType {
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};
//구조체 - 오브젝트관리 
struct ObjectInfo {
	int type;
	int hp;
	int attack;
	int defense;
};
ObjectInfo playerInfo; 
ObjectInfo monsterInfo;

void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomMonster();
void EnterBattle();

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
void SelectPlayer() {
	while (true) {
		cout << "--------------" << endl;
		cout << "직업을 골라주세요!" << endl;
		cout << "(1) 기사 (2) 궁수 (3) 법사" << endl;
		cout << "> ";

		cin >> playerInfo.type;

		if (playerInfo.type = PT_Knight) {
			cout << "기사 생성중... !" << endl;
			playerInfo.hp = 150;
			playerInfo.attack = 10;
			playerInfo.defense = 5;
			break;
		}
		else if (playerInfo.type = PT_Archer) {
			cout << "궁수 생성중... !" << endl;
			playerInfo.hp = 100;
			playerInfo.attack = 15;
			playerInfo.defense = 3;
			break;
		}
		else if (playerInfo.type = PT_Mage) {
			cout << "법사 생성중... !" << endl;
			playerInfo.hp = 80;
			playerInfo.attack = 25;
			playerInfo.defense = 0;
			break;
		}
	}
}

void EnterField() {
	while (true) {
		cout << "--------------" << endl;
		cout << "필드에 입장했습니다!" << endl;
		cout << "--------------" << endl;

		cout << "[PLAYER] HP : " << playerInfo.hp << " / ATT : " << playerInfo.attack << " / DEF : " << playerInfo.defense << endl;

		CreateRandomMonster();

		cout << "--------------" << endl;
		cout << "(1) 전투 (2) 도주" << endl;
		cout << " >";

		int input;
		cin >> input;

		if (input = 1) {
			EnterBattle();
			if (playerInfo.hp == 0) {
				return;
			}
		}
		else {
			return;
		}

	}
}

void CreateRandomMonster() {
	// 1-3
	monsterInfo.type = 1 + (rand() % 3);

	switch (monsterInfo.type)
	{
	case MT_Slime:
		cout << "슬라임 생성중..! (HP:15 / ATT:5 / DEF:0)" << endl;
		monsterInfo.hp = 15;
		monsterInfo.attack = 5;
		monsterInfo.defense = 0;
		break;
	case MT_Orc:
		cout << "오크 생성중..! (HP:40 / ATT:10 / DEF:3)" << endl;
		monsterInfo.hp = 40;
		monsterInfo.attack = 10;
		monsterInfo.defense = 3;
		break;
	case MT_Skeleton:
		cout << "스켈레톤 생성중..! (HP:80 / ATT:15 / DEF:5)" << endl;
		monsterInfo.hp = 80;
		monsterInfo.attack = 15;
		monsterInfo.defense = 5;
		break;

	}

}

void EnterBattle() {
	while (true) {
		int damage = playerInfo.attack - monsterInfo.defense;
		if (damage < 0)
			damage = 0;

		monsterInfo.hp -= damage;
		if (monsterInfo.hp < 0)
			monsterInfo.hp = 0;

		cout << "몬스터의 남은 체력 : " << monsterInfo.hp << endl;
		if (monsterInfo.hp == 0) {
			cout << "몬스터를 처치했습니다!" << endl;
			return;
		}

		 damage = monsterInfo.attack - playerInfo.defense;
		if (damage < 0)
			damage = 0;

		playerInfo.hp -= damage;
		if (playerInfo.hp < 0)
			playerInfo.hp = 0;

		cout << "플레이어의 남은 체력 :" << playerInfo.hp << endl;
		if (playerInfo.hp == 0) {
			cout << "당신은 사망했습니다... GAME OVER" << endl;
		}
	}
}