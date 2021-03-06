/*Copyright 2021 XoT@B*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define max(x, y) ((x) > (y) ? (x) : (y))

int Double(char arr[]) {
    int i = 0, sum1 = 0, sum2 = 0;
    while (arr[i] != 0 && arr[i] != '.') {
        if (arr[i] < '0' || arr[i] > '9') {
             return -1;
        }
        sum1 += arr[i] - '0';
        i++;
    }
    if (arr[i] != 0) {
        i++;
    }
    while (arr[i] != 0) {
        if (arr[i] < '0' || arr[i] > '9') {
          return -1;
        }
        sum2 += arr[i] - 48;
        i++;
    }
    return max(sum1, sum2);
}

int main(int argc, const char * argv[]) {
    const int SIZE = 1000000;
    char arr[SIZE];
    printf("Enter a double, length < 10^6:\n");
    scanf("%s", arr);
    int sum = Double(arr);
    if (sum == -1) {
        printf("Error!\n");
        system("pause");
        return 0;
    }
    printf("Max sum = %d\n", sum);
    system("pause");
    return 0;
}
