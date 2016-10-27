#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp = a;
	a= b;
	b= temp;
}
//冒泡排序
//每次把一个最大值排到正确的位置,即最后面
void BubbleSort(int A[], int size)
{
//因为每次都会和后一位比较大小,所以是size-1
	for(int i = 0; i < size-1; ++i)
	{
		for(int j = 0; j < size-1-i; ++j)
		{
			if(A[j] > A[j+1])
				Swap(A[j], A[j+1]);
		}
	}
}
