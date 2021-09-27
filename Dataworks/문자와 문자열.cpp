
#include <iostream>

using namespace std; 

//문자와 문자열 

// char : 알파벳 / 숫자 문자를 나타낸다. 
// wchar_t : 유니코드 문자를 나타낸다 

//ASCII (American Standard Code for Information Interchange)


char ch = 'a';
char ch2 = '1';
char ch3 = 'a' + 1;

//국제화 시대에 영어만으로 서비스를 할 수 없음 
// 전 세계 모든 문자에 대한 유일 코드를 부여한 것 : 유니코드(unicode)
// 대표적으로 UTF8 / UTF16 

wchar_t wch = L'안';

// Escape Sequence 
// 표기하기 애매한 부분들을 표현 
// \t = ASCII_9 = Tab
// \n = ASCII_10 = LineFeed 
// \r = ASCII_13 = CarriageRetuen 

//stack 영역에서는 지양 -> 선언시 끝에 '\0' = 0 이라는 값을 선언해주어야한다. 
char str[] = { 'h', 'e', 'l', 'l', 'o' };

int main()
{
	cout << ch << endl;
	cout << ch2 << endl;
	cout << ch3 << endl;

	//kor에 대한 설명 필요 
	wcout.imbue(locale("kor"));
	wcout << wch << endl;

	cout << str << endl; 
}

