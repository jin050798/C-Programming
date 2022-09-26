#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    vector<int> vec1(10);
    vector<int> vec2(10);
    vector<int> vec3(10);
    vector<int>::iterator Iter1;
    // vector 반복자 Iter1 선언
    generate(vec1.begin(), vec1.end(), rand);
    // generate : 범위 내에 원소들을 인자로 전달된 함수에서 생성된 값으로 채운다
    generate(vec2.begin(), vec2.end(), rand);
    generate(vec3.begin(), vec3.end(), rand);

    // 오름차순 정렬
    cout << "vec1 정렬 하기 전" << endl;
    for (Iter1 = vec1.begin(); Iter1 != vec1.end(); ++Iter1)
    {
        cout << *Iter1 << ", ";
    }
    cout << endl;

    sort(vec1.begin(), vec1.end()); //여기 오름!

    cout << "vec1 오름차순 정렬" << endl;
    for (Iter1 = vec1.begin(); Iter1 != vec1.end(); ++Iter1)
    {
        cout << *Iter1 << ", ";
    }
    cout << endl;
    cout << endl;

    // 내림차순 정렬
    cout << "vec2 정렬 하기 전" << endl;
    for (Iter1 = vec2.begin(); Iter1 != vec2.end(); ++Iter1)
    {
        cout << *Iter1 << ", ";
    }
    cout << endl;

    sort(vec2.begin(), vec2.end(), greater<int>()); //여기 내림!

    cout << "vec2 내림차순 정렬" << endl;
    for (Iter1 = vec2.begin(); Iter1 != vec2.end(); ++Iter1)
    {
        cout << *Iter1 << ", ";
    }
    cout << endl;
    cout << endl;

    return 0;
}