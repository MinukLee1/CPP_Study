#include <iostream>


// const : 한번 정해지면 절대 바뀌지 않을 값
// constant의 약자 - ( 변수를 상수화 )
// const를 붙힐시 초기값을 반드시 지정.

// 만약 아래의 인빈시블 변수값이 절대 바뀌지않을경우, 앞에 const를 붙혀준다. +초기값 지정 필수 
const int INVINCIBLE = 3; 

// const가 붙을시 특별한 점 -> .rodata?
// -> C++ 표준에서 강조하지않음 -> JUST 컴파일러 (VS) 차이 

// [ 데이터 영역 ]
// .data ( 초기값 x )

// .bss  ( 초기값 x )

// .rodata ( 읽기 전용 데이터 )
const  char* msg = "Hello World";

int main()
{
// [ 스택 영역 ]
	int c = 3;

}
