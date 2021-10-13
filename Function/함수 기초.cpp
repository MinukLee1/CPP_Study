#include <iostream>
using namespace std; 

//함수 (프로시저, 메소드, 루틴) 

/*
input으로 무엇을 받고, output으로 무엇을 뱉을지 정해준다 

반환타입 함수이름([인자타입 매개변수]){
내용 ~ 
return~;
*/
void PrintNumber(int number) {

	cout << "넘겨주신 숫자는" << number << "입니다" << endl;
}

int MultiplyBy2(int a) {

	int b = a * 2; 
	return b; 
}

int main()
{
	int result = MultiplyBy2(3);

	PrintNumber(result);
	//PrintHelloWorld();
	return 0; 
}
