#include<stdio.h>
/*
冒泡排序算法实现
*/

int main() {

    int a[8] = {1, 7, 3, 9, 10, 4, 15, 2};
    int temp = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }


    }

    for (int i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    return 0;
}
