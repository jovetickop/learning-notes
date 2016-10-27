#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp = a;
	a= b;
	b= temp;
}
//选择排序
void SelectionSort(int A[], int size)
{
	for(int i = 0; i < size; ++i)   //每次把i后面最小的数放到第i位,而i前面是已经排好序的
	{
		for(int j = i+1; j< size; ++j)
		{
			if(A[i] > A[j])
			{
				Swap(A[i], A[j]);
			}
		}
	}
}
