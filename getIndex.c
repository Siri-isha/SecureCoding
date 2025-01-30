#include <stdio.h>

int getValueFromArray(int *array, int len, int index) {
    return array[index];
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    int index = 2;

    int value = getValueFromArray(arr, len, index);

    return 0;
}
