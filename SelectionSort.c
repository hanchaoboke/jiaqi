#include<stdio.h>

/*
选择排序的实现
*/

int main() {
    int a[8] = {1, 7, 3, 9, 10, 4, 15, 2};
    int min = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (a[j] < a[i]) {
                int temp = 0;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }


    for (int i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
    return 0;
}