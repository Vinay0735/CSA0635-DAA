#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void processList(int nums[], int n) {
    if (n == 0) {
        printf("Output: None (List is empty)\n");
        return;
    }
    qsort(nums, n, sizeof(int), compare);
    printf("Output: %d\n", nums[n - 1]);
}

int main() {
    int nums1[] = {};  
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    processList(nums1, n1);
    
    int nums2[] = {3, 1, 4, 1, 5, 9};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    processList(nums2, n2);
    
    return 0;
}
