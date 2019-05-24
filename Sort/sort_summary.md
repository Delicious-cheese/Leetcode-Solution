# 为什么使用排序？

# 常用排序算法 （都是从小到大排序）

## 冒泡排序
```c
// arr 需要排序的数组, n 数组的长度

void bubble_sort(int arr[], int n) {
    if(n <= 1) return;   // 数组长度小于等于1时，可以不用排序直接返回

    // 外层循环 表示需要循环的轮数
    // 内层循环交换当前未排序的数
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if(arr[j - 1] > arr[j]) swap(arr[j-1], arr[j]);
        }
        
    }
}
```
## 选择排序
```c
void selection_sort(int arr[], int n) {
    // 最外层循环指向要更换的位置
    // 内层循环选出最小的值
    int minIndex;
    for (int i = 0; i < n; i++) {
        minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
```

## 插入排序
```c
void insertion_sort(int arr[], int n) {

    // 最外层循环指向未排序第一个元素的下标
    // 内层循环遍历已排序的元素，与当前第一个未排序的元素进行比较，内>外，下标改变
    int  preIndex, current;
    for (int i = 1; i < n; i++) {
        preIndex = i -1;
        current = arr[i];

        while(preIndex >= 0 && arr[preIndex] > current) {
            arr[preIndex + 1] = arr[preIndex];
            preIndex--;
        }
        arr[preIndex + 1] = current;
    }

}

## 快速排序
```c
void quick_sort(int a[], int l, int r)
{
    if(l >= r) return;
    int i = l - 1, j = r + 1;
    int x = a[l];

    while(i < j)
    {   
        do i++; while(a[i] < x);
        do j--; while(a[j] > x);
        if(i < j) swap(a[i], a[j]);
    }

    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}


```

## 归并排序
```c
void quick_sort(int a[], int l, int r)
{
    if(l >= r) return;
    int i = l - 1, j = r + 1, x = a[l];
    while(i < j)
    {
        do i++; while(a[i] < x);
        do j--; while(a[j] > x);
        if(i < j) swap(a[i], a[j]);
    }

    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

```

