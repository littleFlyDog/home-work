#include <iostream>
#include "user.h"
using namespace std;

int user()
{
	int coin=0;
	do
	{
		cout << "请输入你的选择，1代表正面朝上，0代表反面朝上"<<endl;
		cin >> coin;
	} while (coin != 0 && coin != 1);
	return coin;
}