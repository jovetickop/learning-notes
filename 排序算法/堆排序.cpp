#define LeftChild(i) (2*(i)+1)    //由于数组是从0开始的，因此儿子节点的索引要多加一个
void PercDown(int A[], int i, int N)   //下滤，将堆顶的元素下滤到适当位置
{
	int Child;
	int Temp;
	for(Temp = A[i]; LeftChild(i) < N; i = Child)
	{
		Child = LeftChild(i);
		if(Child != N-1 && A[Child+1] > A[Child])   //选取儿子中值较大的一个
		{
			Child++;
		}
		if(Temp < A[Child])    //如果temp的值小，则将child上滤
		{
			A[i] = A[Child];
		}
		else    //如果temp的值大于孩子的值，则退出for循环，temp就安放在此
			break;
	}
	A[i] = Temp;
}
void HeapSort(int A[], int N)
{
//从最后一个父节点开始
	for(int i = N/2; i >= 0; --i)   //对一个普通数组建立堆序性，堆顶的值最大,父节点值比子节点大
	{
		PercDown(A, i, N);
	}
	for(i = N-1; i>=0; --i)   //将堆顶元素放到最后，最后一个元素放到堆顶，对除最后的那个元素外的//堆建立堆序性，这样就相当于删除了最大的元素，放到最后，知道删除所有元素则排序完成。
	{
		int temp;
		temp = A[0];
		A[0] = A[i];
		A[i] = temp;
		PercDown(A, 0, i);
	}
}
