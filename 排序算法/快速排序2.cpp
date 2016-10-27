//快速排序 2
void quickSort2(int A[], int Low, int High)
{
	int Left, Right, temp;
	Left = Low;
	Right = High;
	temp = A[Left];
	if(Left > Right)
		return;
	while(Left != Right)
	{
		while(A[Right] >= temp && Left < Right)
			--Right;
		while(A[Left] <= temp && Left < Right)
			++Left;
		if(Left < Right)
			Swap(A[Left], A[Right]);
	}
	A[Low] = A[Left];
	A[Left] = temp;
	quickSort2(A, Low, Left-1);
	quickSort2(A, Left+1, High);
}
void QuickSort2(int A[], int size)
{
	quickSort2(A, 0, size-1);
}
