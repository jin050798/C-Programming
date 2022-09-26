#include <algorithm> 
#include <vector> 
#include <list> 
#include <iostream> 
using namespace std;
int main()
{
	vector<int> vec1(10);
	generate(vec1.begin(), vec1.end(), rand);

	cout << "vec1의 모든 데이터를 vec2에 copy" << endl;
	vector<int> vec2(10);
	copy(vec1.begin(), vec1.end(), vec2.begin()); //vec1을 vec2에 복사
	
	for (vector<int>::iterator IterPos = vec2.begin();
		IterPos != vec2.end();
		++IterPos)
	{
		cout << *IterPos << endl;
	}
	cout << endl;

	cout << "vec1의 모든 데이터를 list1에 copy" << endl;
	list<int> list1(10);
	copy(vec1.begin(), vec1.end(), list1.begin()); //vec1을 list1에 복사

	for (list<int>::iterator IterPos2 = list1.begin();
		IterPos2 != list1.end();
		++IterPos2)
	{
		cout << *IterPos2 << endl;
	}
	return 0;
}