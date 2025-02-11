#include <stdio.h>
#include <string.h>
int existsInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; 
        }
    }
    return 0; 
}
int main() {
    int nums1[] = {4, 3, 2, 3, 1};
    int nums2[] = {2, 2, 5, 2, 3, 6};
    int n = sizeof(nums1) / sizeof(nums1[0]);
    int m = sizeof(nums2) / sizeof(nums2[0]);
    
    int answer1 = 0, answer2 = 0;
    for (int i = 0; i < n; i++) {
        if (existsInArray(nums2, m, nums1[i])) {
            answer1++;
        }
    }
    for (int i = 0; i < m; i++) {
        if (existsInArray(nums1, n, nums2[i])) {
            answer2++;
        }
    }

    printf("Output: [%d, %d]\n", answer1, answer2);

    return 0;
}

