#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int arr[] = {3, 4, 6, -9, 10, 8, 9, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    qsort(arr, n, sizeof(int), compare);
    
    int result = binarySearch(arr, 0, n - 1, key);
    
    if (result != -1)
        printf("Element %d is found at position %d\n", key, result + 1);
    else
        printf("Element %d is not found in the array\n", key);
    
    return 0;
}
