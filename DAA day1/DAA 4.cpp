#include <stdio.h>

int countValidPairs(int nums[], int n, int k) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j] && (i * j) % k == 0) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int nums[] = {3, 1, 2, 2, 2, 1, 3};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int result = countValidPairs(nums, n, k);
    printf("Output: %d\n", result);
    
    return 0;
}

