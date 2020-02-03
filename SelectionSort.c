#include<stdio.h>

/*
选择排序的实现
未完成
*/

int main() {
    int a[8] = {1, 7, 3, 9, 10, 4, 15, 2};
    int min = a[0];
    int temp = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 1; j < 8; j++) {
            if (a[j] < min) {
                temp = a[j];
                a[j] = min;
                min = temp;
            }
        }
    }


    for (int i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}