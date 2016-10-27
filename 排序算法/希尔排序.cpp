void sheelSort(int A[], int number)
{
    for(int gap = number/2; gap >=1; gap/=2)  // gap从number/2开始，每次排序后gap减半，直到为1
    {
        for(int i = gap; i < number; ++i) //从第gap个点开始此轮排序
        {
 /*取要比较的A[i], 与之前的第gap个元素比较，大于那个就表示是正序，退出循环，小于那个就将那个的值放在A[i], 再向前gap个取值直到退出循环，将原A[i]的值放在推出的那个点上，完成此点的排序*/
             //相当于是插入排序,步长是gap
//每次向前遍历时,他前面的序列都是已经排好序的
            int j = 0;
            int temp = A[i];
            for(j = i-gap; j>=0 && temp < A[j];  j-=gap)  
            {
                A[j+gap] = A[j];
            }
            A[j+gap] = temp;
        }
    }
}
// 希尔排序的步长选择对时间复杂度有影响。
// 平均事件复杂度为nlogn
// 最坏时间复杂度为n^1.5