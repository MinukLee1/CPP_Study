
#include <iostream>
using namespace std;

// 불리언(bool)과 실수 : 참/거짓
bool isHighLevel = true;
bool isPlayer = true;
bool isMale = false;

// 사실 bool은 1바이트 정수에 불과 
// *어셈블리에서 bool은 없음 
// bool을 통해 참/거짓 값을 도출 (가독성)

// 1bit 를 사용하여 data도 아낄수 있지않았을까 ? -> 레지스터의 최소단위는 보통 1byte로 잡음 

//float 부호(1) 지수(8) 유효숫자(23) = 32비트 = 4바이트
//double 부호(1) 지수(11) 유효숫자(52) = 64비트 = 8바이트 

int isFemale = 1;
float attackSpeed = 0.539f; // 4byte
double attackSpeed2 = 123.1234; // 8byte

// ex) -3.375라는 값을 저장 
// 1) 2진수로 변환 
// 0.375 = 0.5 * 0 + 0.25 * 1 + 0.125 * 1 = 0b0.011
// 2) 정규화 0b1.1011 * 2^1
// 1(부호) 1(지수) 1011(유효숫자)
// 단, 지수는 unsigned byte라고 가정하고 숫자+127 만들어줌
// 예상 결과 : 0b 1 1000000 1011000'0000'0000'0000'0000

//프로그래밍시 부동소수점은 항상 '근사값'이다. 
//ex) 1/3 = 0.33333....

// 실수 2개를 ==으로 비교하는 것은 지양.
int main()
{
    
    cout << isHighLevel << endl;
}
