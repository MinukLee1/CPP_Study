#include <iostream>
using namespace std;
int hp = 100;
// 변수 선언 방법 
// [타입] [이름];
//[타입] [이름] =[초기값];

// 0이 아닌 초기화 값이 있으면 .data 영역
// 초기값이 0이거나, 초기값이 없는 변수 -> .bss 영역

char a; // 1바이트
short b; // 2바이트
int c; // 4바이트
__int64 d; // 8바이트 (=long long..)

unsigned char ua; // . .

// 이론적으로 양수만 존재할 수 있는 data -> unsigned ?
// ex) level이 음수라는 것은 x -> 차라리 그 자리에서 프로그램을 크래시내서 버그를 픽스하는게 나음
// unsigned / signed 사이의 변환 -> 버그 발생가능 



// -> 콘솔/모바일 게임 -> 메모리가 늘 부족 
// -> 온라인 게임 -> 4byte * 1만명 

int main()
{
    // overflow
    b = 32767;
    b = b + 1;
    cout << b << endl; // -32768

    cout << "체력이" << hp << "남았습니다" << endl ;
}

