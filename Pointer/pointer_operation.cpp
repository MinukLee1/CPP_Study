#include <iostream>
using namespace std;

// 포인터 연산

// 1) 주소 연산자 (&)
// 2) 산술 연산자 
// 3) 간접 연산자
// 4) 간접 멤버 연산자 

struct Player {
	int hp;
	int damage;
};

int main() {

	int number = 1;

	// 1) 주소 연산자(&)
	// -해당 변수의 주소

	int* pointer = &number; 


	// 2) 산술 연산자 for pointer
	number += 1; //값의 산술연산
	pointer += 1; //주소값의 산술연산 (대상의 type의 byte만큼 산술되어 증가)

	//[!] 포인터에서 +나 -등 산술 연산으로 1을 더하거나 뺴면 
	//정말 '그 숫자'를 더하고 뺴라는 의미 x
	// 다음/이전 바구니로 이동하고 싶다 << [바구니단위]의 이동으로
	//즉, 1을 더하면 -> 바구니 1개 이동시켜라
	//3을 더하면 -> 바구니 3개 이동시켜라

	//3) 간접 연산자 (*)
	// -포탈을 타고 해당 주소로 이동

	Player player;
	player.hp = 100;
	player.damage = 10;

	Player* playerPtr = &player;
	(*playerPtr).hp = 200; 
	(*playerPtr).damage = 200;

	// 4) 간접 멤버 연산자 (->)

	playerPtr->hp = 200;
	playerPtr->damage = 200;
	
	return 0;
}