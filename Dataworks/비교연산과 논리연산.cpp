#include <iostream>

bool isSame; 
bool isDifferent;
bool test;

int hp = 100;
bool isInvincible = true;

// 비교연산
// when? -> ex) 체력,경험치 등의 값의 비교를 통한 연산 
// a == b , a >= b . . 

// 논리연산 
// when?? -> 조건에 대한 논리적 사고가 필요할 떄 
// ex) 로그인시 id AND pw가 같아야 할떄. . 


int a = 1;
int b = 1;

int main()
{
	isSame = (a == b);
	isDifferent = (a != b);

	// ! not  -> 0이면 1, 그 외 0 
	test = !isSame; // 사실상 isDifferent의 의미 

	// && and 
	// a && b -> 둘다 1이면 1, 그 외 0 (false) 
	test = (hp <= 0 && isInvincible == false); 

	// || or 
	// a || b -> 둘 중 하나라도 1이면 1 (둘다 0이면 0)
	test = (hp <= 0 || isInvincible == true);

}

