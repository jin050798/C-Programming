#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> CharItems;
	CharItems.push_back( 12 );
	CharItems.push_back( 100 );
	CharItems.push_back( 77 );

	vector<int>::iterator FindIter;

	//CharItems의 처음과 끝사이에 12를 찾는다.
	FindIter = find(CharItems.begin(), CharItems.end(), 12);
	if(FindIter != CharItems.end())
	{
	cout << "CharItem 12를 찾았습니다." << endl;
	}
	else
	{
	cout << "CharItem 12는 없습니다." << endl;
	}

	//CharItems 두번째와 끝사이에 12를 찾는다. 
	//++CharItems.begin()으로 반복자를 한칸 이동시킨다
	FindIter = find(++CharItems.begin(), CharItems.end(), 12);
	if(FindIter != CharItems.end())
	{
		cout << "CharItem 12를 찾았습니다." << endl;
	}
	else
	{
		cout << "CharItem 12는 없습니다." << endl;
	}
	return 0;
}