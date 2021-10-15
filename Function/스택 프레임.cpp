#include <iostream>
using namespace std;
//스택 프레임 

// F10 : 프로시저 단위실행 (함수단위) 
// F11 : 한 단계씩 실행 
// 반환주소값을 넣어주는 이유 : return시 역추적 ~,
int MultiplyBy(int a, int b) {
	int c = a * b;
	return c;
}
void PrintNumber(int number) {

	cout << "넘겨주신 숫자는" << number << "입니다" << endl;
}
int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(b, a);

	PrintNumber(result);
	
	return 0;

}
