#include <iostream>
// 열거형 
using namespace std;
//->상수형 선언 : 열거형과 비교시 상대적으로 메모리낭비 요소있음
const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

// 데이터값 지정 X 시, -> 첫 값은 0부터 시작
// 그 다음 값들은 이전값 + 1 
enum ENUM_SRP
{
    ENUM_SCISSORS = 1,
    ENUM_ROCK,
    ENUM_PAPER
};

// #이 붙음 -> 전처리 지시문 
// #include<iostream>이라는 파일을 찾아서 해당 내용을 사용 
// 1)전처리 -> 2)컴파일 -> 3)링크
#define DEFINE_SCISSORS 1
#define DEFINE_TEST cout << "Hello World" << endl; 


int main()
{
    // 컴파일 이후 define은 남지않음 : 최대한 지양 
    // <-> 선언식과의 차이 | but, 유용할 떄도 있음
    DEFINE_TEST;
}

