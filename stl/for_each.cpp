
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

struct User
{
	int ID;
	int PlayTime;
};

struct UpdatePlayTime
{
	int PlayTime;
	void operator() (User& user) { user.PlayTime += PlayTime; }
};

int main()
{
	//Users 벡터 초기화
	vector< User > Users;
	User user1; user1.ID = 1; user1.PlayTime = 40000;
	User user2; user2.ID = 2; user2.PlayTime = 0;
	User user3; user3.ID = 3; user3.PlayTime = 25000;
	Users.push_back(user1);
	Users.push_back(user2);
	Users.push_back(user3);

	// 현재 플레이 시간
	vector< User >::iterator IterUser;
	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		cout << "ID:" << IterUser->ID << "의 총 플레이 시간: " <<
			IterUser->PlayTime << endl;
	}
	cout << endl;
	UpdatePlayTime updatePlayTime;
	updatePlayTime.PlayTime = 200; //플레이 시간을 200씩 늘려준다
	// 두 번째 유저부터 갱신
	for_each(Users.begin() + 1, Users.end(), updatePlayTime);

	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		cout << "ID:" << IterUser->ID << "의 총 플레이 시간: " <<
			IterUser->PlayTime << endl;
	}
	return 0;
}

//output:
//ID:1의 총 플레이 시간: 40000
//ID:2의 총 플레이 시간: 0
//ID:3의 총 플레이 시간: 25000
//
//ID:1의 총 플레이 시간: 40000
//ID:2의 총 플레이 시간: 200
//ID:3의 총 플레이 시간: 25200