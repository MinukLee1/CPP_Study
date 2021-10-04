#include <iostream>
using namespace std; 

// 분기문 
// 데이터를 메모리에 할당하고 가공하는 방법에 대하여.
// 가공한 데이터를 이용해서 작업을 시행시 . .

int main()
{
	int hp = 100; // 몬스터의 HP
	int damage = 90; // 플레이어 데미지 

	hp -= damage; // 피격 판정 
	bool isDead = (hp <= 0); // 처치 판정 유무 
	
	// 몬스터가 사망시 -> 경험치 추가
	// 어셈블리 : CMP JMP 

	if (isDead)
		cout << "몬스터를 처치했습니다" << endl;
	else {
		if (hp <= 20)
			cout << "몬스터가 도망가고 있습니다" << endl;
		else
			cout << "몬스터가 반격했습니다" << endl;
	}

	// + else if, switch .. 
	// input의 경우에 따라 가독성이 더 높은 분기문 작성가능 
}

