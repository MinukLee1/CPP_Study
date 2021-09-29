#include <iostream>
using namespace std;

// 데이터 연산 

// 디버그 컴파일시 여러 산술연산들의 과정을 어셈블리어로서 확인할 수 있다.
int a = 1;
int b = 2; 

int main()
{
	//접기
#pragma region 산술연산 
	// 산술 연산자 
	// 대입연산
	
	// a에 b를 대입 ~ 후 반환
	a = b;

	// 사칙연산 
	// when? -> 데미지 계산 / 체력감소 / loop문의 카운트 증가 

	a = b + 3; // 덧셈 add
	a = b - 3; // 뺼셈 sub
	a = b * 3; // 곱셈 mul
	a = b / 3; // 나눗셈 div
	a = b % 3; // 나머지 div 

		// += . -=, *=, /=, %= 

	// 증감 연산자 . .
	a = a + 1; 
		
#pragma endregion

}

