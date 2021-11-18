#include <iostream>
using namespace std;

void SetHp(int* hp) {

	*hp = 100; 
}
// Pointer 
int main()
{
	int hp = 1;
	//hp의 포인터(메모리)주소 표기
	SetHp(&hp);

	//number라는 이름의 4byte 정수타입 바구니를 생성 
	//number라는 변수 스택 메모리에 할당 
	// -> 스택 메모리에 있는 특정 주소(number 바구니)에 우리가 원하는 값을 넣은 셈 
	// -> 메모리에 임의의 이름을 붙인것 
	// but, 경우에 따라서는 전역이 아닌 stack 메모리에서 원본 데이터에 접근할 필요가생김 
	int number = 1;

	// Type*변수이름 ;  
	// -Type 
	// -*

	//주소를 저장하는 바구니개념 
	//포인터라는 바구니는 8byte(64bit)고정 크기부여
	int* ptr = &number;

	// [주소를 저장하는 바구니]가 가리키는 주소로가서 작업수행
	// *변수이름 = 값;

	int value1 = *ptr;
	*ptr = 2;

	//  TYPE을 붙히는 이유 
	// * = 포인터의 의미 = 주소를 저장하는 바구니 = 4 or 8 byte 고정크기

	// 주소로 접근시? 
	// -> 특정 data에 대한 분석방법

	//type의 불일치
	__int64* ptr2 = (__int64*)&number;

	*ptr2 = 0xAABBCCDDEEFF;		
	
	return 0;
}