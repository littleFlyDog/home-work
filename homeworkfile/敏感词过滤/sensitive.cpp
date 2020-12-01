#include <iostream>
#include <cstring>
using namespace std;

const char ACCAPT[] = ",.\" @#$";
const char IGNORED[] = "@#$";

bool isAccaptable(char ch) {
    if (isalnum(ch)) return true;

    const char* p = ACCAPT;
    while (*p) {
        if (ch == *p) return true;
        p++;
    }
    return false;
}//判断单个字符是否为合法字符

bool isAccaptableString(const char* s, int len) {
    if (len > 20) return false;

    while (len--) {
        if (!isAccaptable(*s)) return false;//套第一个函数
        s++;
    }
    return true;
}
//判断一个字符串是否合法（长度、字符要求）
bool isIgnored(char ch) {
    const char* p = IGNORED;
    while (*p) {
        if (ch == *p) return true;
        p++;
    }
    return false;
}
//判断一个字符是否为无用字符（@#$）
bool isIgnoredString(const char* s, int len)
{
    while (len--) {
        if (!isIgnored(*s)) return false;
        s++;
    }
    return true;
}
////判断一个字符串是否全是无用字符（@#$）

bool isSensitive(char lft, char rht)
{
    return (lft == 'L' && rht == '4') || (lft == 'F' && rht == 'D');
}

void erase(char* s, int pos, int cnt) {
    int rht = pos + cnt;
    while (s[rht]) {
        s[pos++] = s[rht++];
    }
    s[pos] = 0;
}

int main()
{
    char input[1005];
    cin.getline(input,1005);
    int len = strlen(input);

    if (!isAccaptableString(input, len)) {
        cout << "输入不符合要求";
        return 0;
    }

loop:
    {
        char* s = input; len = strlen(s);
        for (int i = 0; i < len; ++i)
        {
            for (int j = i + 1; j < len; ++j)
            {
                if (isSensitive(toupper(s[i]), toupper(s[j])))
                {
                    if (isIgnoredString(s + i + 1, j - i - 1))
                    {
                        erase(input, i, j - i + 1);
                        goto loop;//只要完成一次消除就重新开始
                    }
                }
                for (int k = i; k < j; ++k)
                {
                    if (toupper(s[i]) == 'D' && s[k] == '2' && s[j] == '6')
                    {
                        if (isIgnoredString(s + i + 1, k - i - 1) &&
                            isIgnoredString(s + k + 1, j - k - 1))
                        {
                            erase(input, i, j - i + 1);
                            goto loop;
                        }////只要完成一次消除就重新开始
                    }
                }
            }
        }
    }

    cout << input;

    return 0;
}
