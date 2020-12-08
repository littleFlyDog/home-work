// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    //const int N = 80;
    //char c;
    //char b;
    //char a[N];
    //一、输入一个字符
    //c = cin.get();读取一个字符（包括空白字符）后结束，输入一个字符后若其后有回车，不会消耗，但自身输入的是回车则会消耗//
    //cin>>b;//读取一个字符（不包括空白字符）输入一个非空字符后若其后有回车，不会消耗//
    //故总结：在使用cin.get、cin.getline输入时一定要注意之前是否留存有空白字符！！！！
    //二，输入一行字符串
    //cin.get(a, 80);无法消耗'\n'
    //cin.getline(a,80)//能够消耗'\n'
    //cin >> ws;//用于跳过空白字符（如'\n'）清空缓存区
    //b = cin.get();
    //cout << b;
    //三、读取到终止
    //1.读取一个字符
    //char ch;
   // while ((ch = cin.get()) != EOF);
    //cout << ch;



    /*这里有个例子，会发现直接跳过了line[0],因为n后面紧跟一个回车
    int n;
    char lines[10][80]; // 保存不超过10个字符串,每个字符串长度不超过80
    cin >> n;//这里有一个回车，故下一句lines[0]直接遇到回车结束，这里的回车会被回收消耗
    for (int i = 0; i < n; ++i) cin.getline(lines[i], 80);
    cout << lines[0] << endl << lines[1];*/
    //char a[50];
    /*读入字符串
    一、遇到EOF结束
    1.依次读入一个字符
   （1）while(cin.get(char))
   （2）whlie(char=cin.get()!=EOF)
    两者均会读入空白字符（包括回车）且不停止，除非出现文本的EOF
    2.读入一行字符串*/
    //int len=0;
    //（1）
    //while (cin.get(s[len++]) && s[len] != '\n');
    //char a[50];
    //int len = 0;
     /*(2)while(s[len++]=cin.get()!=EOF)
     两者均会读入空白字符（包括回车）且不停止，除非出现文本的EOF
     二、遇回车或遇EOF结束
     1.cin.getline(s,80)//且会消耗回车，最佳答案
     2.while(cin.get(s[len])&&s[len]!='\n');//第一个是指EOF第二个是指回车
     len++;
     */
     //char a[80]{}; int len = 0;
     //while ((a[len]=cin.get() )&&( a[len] != '\n'))
     //while(cin.get(a[len])&&a[len]!='\n')//两种皆可,但是字符串的末尾是'\n',但是可以回收空格
     
     //for (len = 0; len < 15; ++len)
        // cout << a[len] ;
    
    return 0;

}
