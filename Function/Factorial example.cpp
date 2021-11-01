#include <iostream>
using namespace std; 

// Overloading
// -매개변수 갯수가 다르거나, Type이 다를시..

// 많은 함수를 연속해서 호출시 프로그램 오류발생 가능 .. ex) Factorial 반복함수
int Factorial(int n) {
    if (n <= 1)
        return 1;

    return n * Factorial(n - 1);
}

int Add(int a, int b) {
    int result = a + b;

    return result; 
}

float Add(float a, float b) {
    float result = a + b;
    return result;
}

//기본 인자값
// + 기본인자값의 위치는 항상 맨 뒤에 위치하여야한다. 
void SetPlayerInfo(int hp, int mp, int attack, int guildid=0) {
        
}


int main()
{
    int result = Add(1.5f, 2.1f);
    cout << result << endl;

    SetPlayerInfo(100, 40, 10);

    // 5! = 5 * 4!
    // 4! = 4 *3*2*1
    // n! = n*(n-1)!

    return 0; 
}
