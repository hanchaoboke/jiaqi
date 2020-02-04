/*
二分查找算法的实现
*/
#include<stdio.h>

int main() {
    int a[8] = {1, 3, 4, 5, 6, 7, 8, 9};
    int key = 0;
    printf("请输入想要查找的数字：");	scanf("%d", &key);

    int left = 0;
    int right = 7;
    int mid = 0;

    while (left < right) {
        mid = (left + right) / 2;
        if (key < a[mid]) {
            right = mid;
        } else if (key > a[mid]) {
            left = mid;
        } else if (key == a[mid]) {
            printf("查找的数字所在数组位置a[%d]\n", mid);
            break;
        }

    }

    return 0;
}