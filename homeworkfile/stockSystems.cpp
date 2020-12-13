#include <iostream>
#include <cstdio>

using namespace std;
void showOption() {
    cout << "欢迎使用股票分析系统：" << endl;
    cout << "1--输入股票价格序列" << endl;
    cout << "2--查询股票价格" << endl;
    cout << "3--输出升序的股票价格序列" << endl;
    cout << "4--输出最小值和最大值的日期" << endl;
    cout << "5--一笔交易的最大利润" << endl;
    cout << "6--多笔交易的最大利润" << endl;
    cout << "7--退出" << endl;
}

int initData(int* a)//此模块用于输入数据
{
    int n = 0;
    do
    {
        cin >> a[n];
        ++n;
    } while (a[n - 1] != -1);
    return n - 2;
}
void bubbleSort(int* a, int num)//此模块使用冒泡排序法使价格升序排列并输出
{
    int newArray[10]{};
    for (int index = 0; index <= num; ++index)
    {
        newArray[index] = a[index];
    }
    bool isExistSwap{};
    for (int rh = num; rh >= 0; --rh)
    {
        isExistSwap = false;
        for (int lh = 0; lh < rh; ++lh)
        {
            if (newArray[lh] > newArray[lh + 1])
            {
                swap(newArray[lh], newArray[lh + 1]);
                isExistSwap = true;
            }
        }
        if (!isExistSwap)
        {
            break;
        }
    }
    for (int index = 0; index <= num; ++index)
    {
        cout << newArray[index] << " ";
    }
    cout << endl;
}

void dispData(int* a, int num)//此模块用于输出数据
{
    for (int index = 0; index <= num; ++index)
    {
        cout << a[index] << " ";
    }
    cout << endl;
}

void dateMaxMin(int* a, int num)//此模块用于寻找最小值与最大值的日期
{
    int minDate = 0, maxDate = 0;
    for (int index = 1; index <= num; ++index)
    {
        minDate = (a[minDate] < a[index] ? minDate : index);
    }
    for (int index = 1; index <= num; ++index)
    {
        maxDate = (a[maxDate] > a[index] ? maxDate : index);
    }
    cout << minDate << " " << maxDate << endl;
}

void oneTrade(int* a, int num)
{
    int minDate = 0, maxDate = 0, price;
    int bestFir = -1, bestSec = -1, bestTir = -1;
    for (int index = 1; index <= num; ++index)
    {
        minDate = (a[minDate] < a[index] ? minDate : index);
    }
    for (int index = 1; index <= num; ++index)
    {
        maxDate = (a[maxDate] > a[index] ? maxDate : index);
    }
    if (minDate < maxDate)
    {
        price = a[maxDate] - a[minDate];
    }
    else
    {
        for (int index = minDate + 1; index <= num; ++index)
        {
            if (bestFir < (a[index] - a[minDate]))
            {
                bestFir = a[index] - a[minDate];
            }
        }
        for (int index = maxDate + 1; index < minDate; ++index)
        {
            for (int j = index + 1; j < minDate; ++j)
            {
                if (bestSec < (a[j] - a[index]))
                {
                    bestSec = a[j] - a[index];
                }
            }
        }
        for (int index = 0; index < maxDate; ++index)
        {
            if (bestTir < (a[maxDate] - a[index]))
            {
                bestTir = a[maxDate] - a[index];
            }
        }
        price = (bestFir > bestSec ? bestFir : bestSec);
        price = (price > bestTir ? price : bestTir);
    }
    if (price < 0)
    {
        price = 0;
    }
    cout << price << endl;
}
int main()
{
    int order = 0, array[10]{}, num = 0;
    showOption();
    while (cin >> order)
    {
        switch (order)
        {
        case 7: return 0;
        case 1:num = initData(array); break;
        case 2:dispData(array, num); break;
        case 3:bubbleSort(array, num); break;
        case 4:dateMaxMin(array, num); break;
        case 5:oneTrade(array, num); break;
        }

    }

}
