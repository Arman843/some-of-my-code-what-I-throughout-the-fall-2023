#include <stdio.h>

void printSortedArray(int arr[], int start, int end) {
    // Base case: if the array is empty or has only one element
    if (start > end) {
        return;
    }

    // Print the middle element
    int mid = (start + end) / 2;
    printf("%d ", arr[mid]);

    // Recursively print elements before and after the middle
    printSortedArray(arr, start, mid - 1);
    printSortedArray(arr, mid + 1, end);
}

int main() {
    int arr[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sorted array in recursive order: ");
    printSortedArray(arr, 0, size - 1);

    return 0;
}
