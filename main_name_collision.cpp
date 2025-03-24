#include <iostream>

namespace name_A {
	void foo() {
		std::cout << "It is in name_A" << std::endl;
	}
};

namespace name_B {
	void foo() {
		std::cout << "It is in name_B" << std::endl;
	}
};

using namespace name_A;
using namespace name_B;

int main_name_collision()
{
	name_A::foo();
	name_B::foo();

	foo();	// 이름 충돌 예러 발생 (Name Collision)

	return 0;
}