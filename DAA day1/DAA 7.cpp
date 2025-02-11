#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void getUniqueElements(int nums[], int n) {
    if (n == 0) {
        printf("Output: [] (Empty list)\n");
        return;
    }
    qsort(nums, n, sizeof(int), compare);
    int unique[n];
    int j = 0;
    
    unique[j++] = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            unique[j++] = nums[i];
        }
    }
    printf("Output: [");
    for (int i = 0; i < j; i++) {
        printf("%d", unique[i]);
        if (i < j - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int nums1[] = {3, 7, 3, 5, 2, 5, 9, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    getUniqueElements(nums1, n1);
    
    int nums2[] = {-1, 2, -1, 3, 2, -2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    getUniqueElements(nums2, n2);
    
    int nums3[] = {1000000, 999999, 1000000};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    getUniqueElements(nums3, n3);
    
    return 0;
}

