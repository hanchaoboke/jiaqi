/*

快速排序算法的实现
参考了网上的代码，后续还需要学习

*/
#include<stdio.h>
#define LENGTH(array) ( (sizeof(array)) / (sizeof(array[0])) )

/*int main() {
    int a[10] = {72, 6, 57, 88, 60, 42, 83, 73, 48, 85};
    int left = 0;
    int right = 9;
    int key = 72 ;

    while (left < right) {
        if (a[right] < key) {
            a[left] = a[right];
            right--;
        }else if (a[left+1] > key) {
            a[right] = a[left+1];
            left++;
        }
    }

    for(int i = 0;i<10;i++){
    	printf("%d ",a[i]);

    }
    putchar('\n');


    return 0;
}*/
void quick_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int i,j,x;

        i = l;
        j = r;
        x = a[i];
        while (i < j)
        {
            while(i < j && a[j] > x)
                j--; // 从右向左找第一个小于x的数
            if(l < j)
                a[i++] = a[j];
            while(i < j && a[i] < x)
                i++; // 从左向右找第一个大于x的数
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(a, l, i-1); 
        quick_sort(a, i+1, r); 
    }
}

int I;

int main() {
    
    
       int a[] = {30,40,60,10,20,50};
       int ilen = LENGTH(a);

       printf("before sort:");
       for (int i=0; i<ilen; i++)
           printf("%d ", a[i]);
       printf("\n");

       quick_sort(a, 0, ilen-1);

       printf("after  sort:");
       for (int i=0; i<ilen; i++)
           printf("%d ", a[i]);
       printf("\n");
    return 0;
}