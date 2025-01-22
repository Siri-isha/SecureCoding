#include <stdio.h>
int getValueFromArray(int *array, int len, int index) {
// Return the element from the array at the specified index
  return array[index];
}
int main() {
  int array[] = {10, 20, 30, 40, 50};
  int len = sizeof(array) / sizeof(array[0]);
  int index = 2;
  int value = getValueFromArray(array, len, index);
  return 0;
}
