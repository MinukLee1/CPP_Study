#include <iostream>

using namespace std;

// 지역변수와 값 전달 

// 코드Data - 전역Data - 힙 - 스택 
// 초기화 여부 : const, rodata, data, BSS
 
//전역변수
int globalValue = 0; 

void Test() {
	cout << "전역 변수의 값 :" << globalValue << endl;
	globalValue++;
}

void IncreaseHp(int hp) {
	hp = hp + 1;
}

// [[매개변수][RET][지역변수(hp=1)] [매개변수(hp=2)][RET][지역변수] [매개변수][RET][지역변수]
// 주소값에 대한 접근 필요 
int main()
{
	int hp = 1;
	// 1
	cout << "Increase 호출 전 : " << hp << endl;
	IncreaseHp(hp);
	// 1
	cout << "Increase 호출 후 : " << hp << endl;


	cout << " 전역 변수의 값은 :" << globalValue << endl;
	globalValue++;

	Test();

	//지역변수 : stack 영역
	int localValue = 1;

    return 0;
}

