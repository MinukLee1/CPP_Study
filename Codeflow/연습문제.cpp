#include <iostream>
using namespace std;


int main()
{
	//별찍기 
	//input을 주면 그에 맞는 N*N 출력
	int input; 
	cin >> input; 

	for (int j = 0; j < input; j++) {
		for (int i = 0; i < input; i++) {
			cout << "*";
		}
		cout << endl;
	}

	//구구단
	for (int k = 2; k <= 9; k++) {
		for (int g = 1; g <= 9; g++) {
			cout << k << "*" << g << "=" << k * g << endl;
		}
	}

}

