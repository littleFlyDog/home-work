#include <iostream>
#include "user.h"
using namespace std;

int user()
{
	int coin=0;
	do
	{
		cout << "���������ѡ��1�������泯�ϣ�0�����泯��"<<endl;
		cin >> coin;
	} while (coin != 0 && coin != 1);
	return coin;
}