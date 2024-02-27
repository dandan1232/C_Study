/*
 @author: lindand
 @date: 2024-02-27
 @description:选择排序
 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
 然后，再从剩余未排序元素中继续寻找最小（大）元素，
 然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
*/

void selection_sort(int a[], int len){
    int i,j,temp;
    for (i = 0; i < len - 1; i++) {
        int min = i; //记录最小值，第一个元素默认最小
        for (j = i + 1; i < len; j++) { //访问未排序的元素
            if (a[j] < a[min]) { //找到目前最小值
                min = j; //记录最小值
            }
        }
        if (min != i) {
            temp = a[min]; //交换两个变量
            a[min] = a[i];
            a[i] = temp;
        }
        /*swap(&a[min],&a[i]);*/ //使用自定义函数交换
    }
}

/*
void swap(int *a,int *b) // 交换两个变量
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/