#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 100000 
#define MIN_VAL -100000 

int countValidPairs(int nums[], int n) {
    int freq[MAX_VAL - MIN_VAL + 1] = {0};
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        freq[nums[i] - MIN_VAL]++;
    }
    
    for (int i = 0; i < n; i++) {
        if (freq[nums[i] - MIN_VAL] > 0) {
            count++;
            freq[nums[i] - MIN_VAL] = 0; 
        }
    }
    
    return count;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output: %d\n", countValidPairs(nums1, n1));
    
    int nums2[] = {7, 7, 7, 7, 7};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output: %d\n", countValidPairs(nums2, n2));
    
    int nums3[] = {-10, 2, 3, -4, 5};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output: %d\n", countValidPairs(nums3, n3));
    
    return 0;
}

