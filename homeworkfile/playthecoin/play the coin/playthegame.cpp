#include<iostream>
#include"playthegame.h"
#include"user.h"
using namespace std;
void playthegame()
{
	char a = 'Y';
	int coin;
	while (a == 'y' || a =='Y')
	{
		coin = rand() % 2;
		a = 'N';
		if (user()== coin)
		    cout << "��Ӯ�ˣ�";
		else
		    cout << "�����ˣ�";
		cout<<"������Ҫ������Ϸ�𣿣�y��Y��";
		cin >> a;
	}

}