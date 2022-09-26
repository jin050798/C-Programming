#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename Iter>
void print(Iter begin, Iter end) {
    while (begin != end) {
        cout << "[" << *begin << "] ";
        begin++;
    }
    cout << endl;
}
int main() {
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "처음 vec 상태 ------" << endl;
    print(vec.begin(), vec.end());

    cout << "벡터에서 값이 3 인 원소 제거 ---" << endl;
    vec.erase(remove(vec.begin(), vec.end(), 3), vec.end());
    print(vec.begin(), vec.end());
}

/*erase()추가설명
Iterator erase(Iterator 3); //3을 지워라.
Iterator erase(Iterator first, Iterator last); //first부터 last까지 지워라.
위 예제에서는 두번째 함수 사용하여 구현*/