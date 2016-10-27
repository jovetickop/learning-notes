//快速排序
void QSort(int a[], int Low, int High)
{
	if(Low > High)
		return;
	int Left = Low;
	int Right = High;
	int x = a[Low];   //以最左边一个作为枢纽元
	while(Left < Right)
	{
		//从右向左找到第一个小于枢纽元的值,放到此时的left上
		while(Left < Right && a[Right] >= x)
			--Right;
		a[Left] = a[Right];
		//从左到右找到第一个大于枢纽元的,放到此时的right上
		while(Left < Right && a[Left] <= x)
			++Left;
		a[Right] = a[Left];
	}
	a[Left] = x;	//枢纽元放在left上
	//整个while运行完后,枢纽元左边的都是比他小的,右边的都是比他大的,然后再分治
	QSort(a, Low, Left-1);
	QSort(a, Left+1, High);
}
