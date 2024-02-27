/*
 @author: lindand  
 @date: 2024-02-27
 @description:插入排序
 它的工作原理是通过构建有序序列，对于未排序数据，
 在已排序序列中从后向前扫描，找到相应位置并插入。
 插入排序在实现上，通常采用in-place排序（即只需用到 {\displaystyle O(1)} {\displaystyle O(1)}的额外空间的排序），
 因而在从后向前扫描过程中，需要反复把已排序元素逐步向后
挪位，为最新元素提供插入空间。
*/


void insertion_sort(int arr[], int len){
    int i,j,temp;
    for (i=1;i<len;i++){
        temp = arr[i];
        for (j=i;j>0 && arr[j-1]>temp;j--)
            arr[j] = arr[j-1];
        arr[j] = temp;
    }
}