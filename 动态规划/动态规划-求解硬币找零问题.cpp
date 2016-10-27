//有若干面值的若干硬币,如何用最少得硬币数凑足x元?

#include<iostream>
using namespace std;
//value 保存硬币种类的数组
//kinds 硬币的种类数
// money 钱
//coins 保存最小需要硬币数的数组
void MinNumberCoin(int values[], int kinds, int money, int coins[])
{
	coins[0] = 0;
	for(int i = 1; i <money; ++i)           //前的总数是i
	{
		int minCoins = i;                       //初始最小总数，选一个很大的数，这里选钱的总数
		//遍历,选出最小的
		for(int j = 0; j < kinds; ++j)
		{
			if(values[j] <= i)
			{
				int temp = coins[i-values[j]]+1;
					if(temp < minCoins)
						minCoins = temp;
			}
		}
		coins[i] = minCoins;            //保存下来
	}
}
int main()
{
	int values[3] = {1, 3, 5};
	int coins[12] = {0};
	MinNumberCoin(values, 3, 12, coins);
	for(int i = 0; i<12; ++i)
	{
		cout<<coins[i]<<endl;
	}
}

