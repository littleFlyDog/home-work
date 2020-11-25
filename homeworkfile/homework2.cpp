#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a;
    b=a%10;
    c=(a-b)/10%10;
    d=(a-b-c*10)/100;
    cout << a << "的百位数字是" << d << "，十位数字是" << c << "，个位数字是" << b;
    return 0;
}
