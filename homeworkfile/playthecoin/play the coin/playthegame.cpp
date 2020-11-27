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
		    cout << "你赢了！";
		else
		    cout << "你输了！";
		cout<<"请问你要继续游戏吗？（y或Y）";
		cin >> a;
	}

}