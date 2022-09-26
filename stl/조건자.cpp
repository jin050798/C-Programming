#include <iostream>
using namespace std;

struct LessFunctor
{
	bool operator()(int left, int right)      // 함수 객체 조건자
		const {
		return left < right;
	}
};

bool LessFun(int left, int right)             // 함수 조건자
{
	return left < right;
}

int main(void)
{
	bool (*LessPtr)(int, int) = LessFun;      // 함수 포인터 조건자
	LessFunctor LessFunctor;

	cout << LessFunctor(10, 20) << endl;
	cout << LessFun(10, 20) << endl;
	cout << LessPtr(10, 20) << endl;
}